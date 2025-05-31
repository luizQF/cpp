#include <iostream>
#include <list>
using namespace std;
list<string> Compras;
list<string>::iterator it;//o iterator precisa ser do mesmo tipo que a lista.
int main(){
    string item;
    Compras.push_back("Bolo");
    Compras.push_back("Farinha");
    Compras.push_back("tulipas");
    //pao seria inserido aqui
    Compras.push_back("posicao 3");
    Compras.push_back("posicao 4");
    it = Compras.begin();
    advance(it, 3);
    Compras.insert(it, "pao");//pao inserido na terceira posição, o item atual vai para a posição abaixo

    while(!Compras.empty()){
        cout << Compras.front() << endl;
        Compras.pop_front();
    }
    return 0;
}
