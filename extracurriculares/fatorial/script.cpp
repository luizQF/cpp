#include <iostream>
#include <cstdlib>
using namespace std;
// 5 * 4 * 3 * 2 * 1 = ?
int main(){
    iniciar:
    cout << "FATORACAO!! \n escolha um numero para fatorar \n";
    int num;
    cin >> num;
    int armazenar = 1;
    string fatorando;
    cout << "\nSua fatoracao e: \n";
    for(int i = 0; i < num; i++){
        armazenar *= (num - i);
        cout << armazenar  << ", ";
    }
    char decidir;
    cout << "\n continuar [s/n]";
    cin >> decidir;
    if(decidir == 's' || decidir == 'n'){
        goto iniciar;
    }
    return 0;
}