#include <iostream>
using namespace std;
int main(){
    int valor = 100;
    int *pt;
    pt = &valor; //pt recebe o endereço da variavel valor
    *pt = 10; // no endereço apontado por pt adicione 10
    cout << pt << " : posicao da variavel"<<endl; //imprime a posição na memoria
    cout << *pt << " : valor da variavel"<<endl; //imprime o valor na posição 
    return 0;
}