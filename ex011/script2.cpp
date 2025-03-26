#include <iostream>
using namespace std;
int main(){
    int matriz[2][2];
    int l,c;
    for(l = 0; l < 2; l++){//percorre as linhas da matriz
        for(c = 0; c < 2; c++){//linha inicia em zero e ao sair do looping reinicia valendo ++
            cin >> matriz[l][c];
        }
    }
    for(l = 0; l < 2; l++){
        for(c = 0; c < 2; c++){
            cout << "|";
            cout << matriz[l][c];
            cout << "|";
        }
        cout << "\n";
    }
    return 0;
}