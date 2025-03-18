#include <iostream>
using namespace std;
int main(){
    int matriz[25][20];
    int l,c;
    int passo = 100;
    for(l = 0; l < 25; l++){
        cout << "|";
        for(c = 0; c < 20; c++, passo++){
            matriz[l][c] = passo;
            cout << matriz[l][c] << " ";
        }
        cout << "|";
        cout << "\n";
    }
    return 0;
}