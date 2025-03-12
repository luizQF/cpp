#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    string pasta = "c:\\Users\\Luiz Felipe\\Videos\\Roblox";
    if(remove(pasta.c_str()) == 0){
        cout << "sucesso ao remover a pasta";
    }else{
        cout << "falha ao remover pasta";
    }
    return 0;
}