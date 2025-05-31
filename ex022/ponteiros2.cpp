#include <iostream>
using namespace std;
int main(){
    int vetor[3];
    int *p;
    p = vetor;
    
    *p = 10;//Alterar valor do elemento que o ponteiro aponta
    cout << p << *p << endl; //printa a primeira pos

    *(p++);//avança + 1 posição que o ponteiro aponta.
    *p = 20;
    cout << p << *p <<endl;// printa a segunda pos
    return 0;
}