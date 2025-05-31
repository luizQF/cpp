#include <iostream>
using namespace std;
//ATRIBUIMOS UM VALOR AO ARGUMENTO PARA DEFINI-LO COMO DEFAULT
void texto(string txt="INSIRA UM VALOR");
int main(){
    //omissão de argumentos
    texto();//VALOR DEFAULT = "INSIRA UM VALOR"

}
void texto(string txt){
    cout << txt;
}