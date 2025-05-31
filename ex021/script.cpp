#include <iostream>
#include <string>
using namespace std;
struct Pessoa{
    string nome;
    int idade;
    int filhos;
};
int main(){
    Pessoa V3, V4;
    V3.nome = "Maria";
    V3.idade = 12;
    V3.filhos = 0;

    V4.nome = "joao";
    V4.idade = 12;
    V4.filhos = 0;
    cout << "Dados do vizinho";
    cout << "\n\nNome do vizinho.....: "<< V3.nome << endl;
    cout << "Idade do vizinho....: "<< V3.idade << endl;
    cout << "Filhos do vizinho...: "<< V3.filhos << endl;
    return 0;
}