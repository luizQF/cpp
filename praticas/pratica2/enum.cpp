#include <iostream>
using namespace std;

    enum Mochila{
        graveto, pedra, madeira, picareta
    };
    
    void craftPicareta(Mochila M_P[], int tam = 0);

int main(){
    Mochila M_P1[] = {pedra, graveto};
    Mochila M_P2[] = {madeira, graveto, pedra};

    craftPicareta(M_P2, sizeof(M_P2) / sizeof(M_P2[0]));
    return 0;
}

void craftPicareta(Mochila M_P[], int tam){
    bool pedra1 = false, graveto2 = false, madeira3 = false;

    for(int i = 0; i < tam; i++){
        if(M_P[i] == pedra){
            pedra1 = true;
        }else if(M_P[i] == graveto){
            graveto2 = true;
        }else if(M_P[i] == madeira){
            madeira3 = true;
        }
    }

    if(madeira3 && graveto2 && pedra1){
        cout << "PICARETA CRAFTADA";
    }else{
        cout << "PICARETA NAO CRAFTADA VERIFIQUE SEUS ITENS";
    }
}