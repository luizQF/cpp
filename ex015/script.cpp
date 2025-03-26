#include <iostream>
using namespace std;
//SOBRECARGA DE FUNÇÕES -> funções com argumentos diferentes podem ter o msm nome.

void texto();
void texto(string txt);

int main(){
    texto();//chama a função sem argumentos
    texto("ESCREVE2"); //chama a função que recebe um argumento
    return 0;
}
void texto(){
    cout << "\n ESCREVE \n";
}
void texto(string txt){ 
    cout << "\n " << txt << "\n";
}