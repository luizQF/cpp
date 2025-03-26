#include <iostream>
#include <string.h> //para usar comparação de string strcmp
#include <stdlib.h>
using namespace std;
int main(int argc, char *argv[]){//argc = quantidade de parametros; argv = armazena os argumentos
    if(argc > 1){
        cout << argv[1];
        if(!strcmp(argv[1], "sol")){
            cout << "vou ao clube";
        }else if(!strcmp(argv[1], "nublado")){
            cout << "vou ao clube";
        }else{
            cout << "fico em casa";
        } 
    }
    system("pause");
    return 0;
}