#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> numeros, numeros2;

    for(int i = 0; i <= 100; i += 10){//tamanho atual 11 elemento
        if(numeros.empty()){
            cout << "\n\nNumeros1\n";
        }
        numeros.push_back(i);
        cout << numeros.back() << endl;
    }
        cout <<"tamanho de numeros1: " << numeros.size() << "\n\n";


    for(int i = 0; i <= 200; i += 20){//tamanho atual 11 elemento
        if(numeros2.empty()){
            cout << "\n\nNumeros2\n";
        }
        numeros2.push_back(i);
        cout << numeros2.back() << endl;
        
    }
        cout <<"tamanho de numeros2: " << numeros2.size() << "\n\n";


    numeros.swap(numeros2);

    cout << "Numeros trocados com o metodo swap\n\n\n";

    for(int i = 0; i < numeros.size(); i++){//tamanho atual 11 elemento
        cout << numeros[i] << endl;
    }


    for(int i = 0; i < numeros2.size(); i++){//tamanho atual 11 elemento
        cout << numeros2[i] << endl;
    }
    return 0;
}