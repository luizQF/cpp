#include <iostream>
#include <fstream>
using namespace std;
int main(){
    string Userdados[2];
    ifstream dadosdoUser("dados.txt");

    if(dadosdoUser.is_open()){
        dadosdoUser >> Userdados[0] >> Userdados[1];
        dadosdoUser.close();
    }else{
        cout << "digite seu nome: \n";
        cin >> Userdados[0];
        cout << "digite sua senha: \n";
        cin >> Userdados[1];
    } 
    ofstream dadosSalvar("dados.txt");
    dadosSalvar << Userdados[0] << "\n" << Userdados[1];
    dadosSalvar.close();
    return 0;
}