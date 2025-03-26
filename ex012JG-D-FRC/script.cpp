#include <iostream>
#include <stdlib.h>
using namespace std;
int tam = 0;
//PROTOTIPANDO FUNÇÕES
int tamanho(char p[50]);
void ocultar(char p[50]);
int main(){
   
    //JOGO DA FORCA
    char palavra[50], Psecreta[50], letra;
    int chances , acertos = 0;
    bool acerto;

    //AREA DO ADM
    cout << "ESCOLHA A PALAVRA:\n";
        cin >> palavra;
    cout << "\nQUANTAS CHANCES QUER DAR AO JOGADOR:\n";
        cin >> chances;
    system("cls");

    //DEFINIÇÕES DO JOGO
    tam = tamanho(palavra);
    ocultar(Psecreta);

    cout << "\nPALAVRA: " << Psecreta;
    cout << "\nCHANCES: " << chances;
    //CRIANDO JOGO PRINCIPAL
    while(acertos < tam && chances > 0){
        cout << "\n\nINSIRA UMA LETRA\n\n";
        cin >> letra;
        acerto = false;
        //VERIFICANDO A LETRA
        for(int i = 0; i < tam; i++){
            if(palavra[i] == letra){
                acertos ++;
                Psecreta[i] = letra;
                acerto = true;
            }
        }
        //VERIFICANDO SE HOUVE ACERTO
        if(acerto){
            cout << "\nPALAVRA CORRETA!!! PALAVRA: " << Psecreta;
        }else{
            cout << "\nPALAVRA INCORRETA!!! CHANCES: " << chances;
        }
    }
    if(acertos == tam){
        cout << "\n\nPARABENS VOCE DESCOBRIU A PALAVRA, A PALAVRA ERA: " << palavra;
    }else{
        cout << "\n\nGAMEOVER!!! VOCE NAO DESCOBRIU A PALAVRA, A PALAVRA ERA: " << palavra;
    }
    return 0;
}
//CRIANDO FUNÇÕES PARA TAMANHO E OCULTAÇÃO
int tamanho(char p[50]){
    for(int i = 0; p[i] != '\0'; i++){
        tam ++;
    }
    return tam;
}
void ocultar(char p[50]){
    for(int i = 0; i < tam; i++){
        p[i] = '-';
    }
    p[tam] = '\0';
}