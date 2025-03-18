#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream dadosdoUser("dados.txt");
    string Userdados[2];
    string login, senha;
    if(dadosdoUser.is_open()){
        dadosdoUser >> Userdados[0] >> Userdados[1];
        dadosdoUser.close();
    }
    cout << "insira seu usuario:\n";
    cin >> login;
    cout << "insira sua senha:\n";
    cin >> senha;
    if(login != Userdados[0] && senha != Userdados[1]){
        cout << "\n\nusuario e senha inválidos";
    }else{
        cout << "\n\n ACESSO LIBERADO!!!";
    }
    return 0;
}