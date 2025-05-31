#include <iostream>
#include <stack>
#include <queue>
using namespace std;
//stack <tipo> nome;
void main2();
int main(){
    stack <string> cartas;
    cartas.push("reis de copas");
    //.size() para ver o tamanho
    cartas.pop(); //retira o elemento do topo
    //metodo empty
    //.empty() verifica se a pilha está vazia ou não (retorna true ou false)
    //.top() retorna o objeto do topo
    main2();
}
void main2(){
    queue <string> cartas;
    cartas.push("reis de copas");
    cartas.push("reis de ouros");
    cout << cartas.front();//primeiro elemento
    cout << cartas.back();//ultimo elemento
}