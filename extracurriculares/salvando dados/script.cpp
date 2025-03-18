#include <iostream>
#include <fstream>
#include <cstdio>
using namespace std;
int main(){
    ifstream dados("arquivo.txt");
    int cor = 0;
    string nome = "";
   if(dados.is_open()){
        dados >> cor >> nome;
        dados.close();
        cout << "bem vindo de volta "<< nome  << " sua cor selecionada anteriormente foi: ";
        switch(cor){
            case 1:
                cout << "verde \n\n";
                break;
            case 2:
                cout << "azul\n\n";
                break;
            case 3: 
                cout << "preto\n\n";
                break;
        }
    }else{
        cout << "como se chama? \n";
        cin >> nome;
    }

    cout << "\nola escolha uma cor [1-VERDE] [2-AZUL] [3-PRETO] \n\n";
    cin >> cor;
    switch(cor){
        case 1:
            cout << "Sua cor escolhida foi verde\n\n";
            break;
        case 2:
            cout << "sua cor escolhida foi azul\n\n";
            break;
        case 3: 
            cout << "sua cor escolhida foi preto \n\n";
            break;
    }

    ofstream dados_alterar("arquivo.txt");
    dados_alterar << cor << nome;
    dados_alterar.close();
    system("pause");
    return 0;
}