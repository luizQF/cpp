#include <iostream>
using namespace std;
int main(){
    int nota1, nota2;
    cout << "insira suas notas, Nota 1\n";
    cin >> nota1;
    cout << "nota 2\n";
    cin >> nota2;
    nota1 + nota2 >= 12 ? cout << "aprovado" : cout << "reprovado";
    return 0;
}