#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n1;
    int n2;
    int res;
    char confirm;
    inicio://ponteiro do goto
    system("cls");
    cout << "insira uma nota: ";
    cin >> n1;
    cout << "nota: " << n1 << " inserido\n";
    cout << "insira outra nota: ";
    cin >> n2;
    res = n1 + n2;
    cout << "nota: " << n2 << " inserido \n\n";
    cout << "sua notal total e: " << res << endl;
    if(res >= 60){
        cout << "APROVADO \n";
    }else if(res > 40){
        cout << "recuperacao \n";
    }else{
        cout << "reprovado \n";
    }
    cout << "deseja continuar [s/n]: ";
    cin >> confirm;
    if(confirm == 's' or confirm == 'S'){
        goto inicio;//se a condição for verdadeira volta para o inicio
    }
    return 0;
}