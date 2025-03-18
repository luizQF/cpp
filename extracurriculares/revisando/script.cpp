#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream documento("dados.txt");
    int cor = 0;
    if(documento.is_open()){
        documento >> cor;
        cout << "dados salvos, executando programa \n cor escolhida anteriormente: " << (cor == 1? "verde" : "azul") << "\n\n";
    }else{
        cout << "não conseguimos encontrar dados anteriores continuando programa \n\n";
    }
    cout << "insira uma cor de sua preferencia [1-verde] [2-azul]\n";
    cin >> cor;
    switch(cor){
        case 1:
            cout << "\n\nsua cor escolhida foi: verde\n\n\n FIM DO PROGRAMA \n";
            break;
        case 2:
            cout << "\n\nsua cor escolhida foi: azul\n\n\n FIM DO PROGRAMA \n";
            break;
    }
    ofstream documento_edit("dados.txt");
    documento_edit << cor;
    documento_edit.close();
    return 0;
}