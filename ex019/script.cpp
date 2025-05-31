#include <iostream> 
#include <stack>
using namespace std;
int main(){
//PILHA STACK
stack <string> cartas;//pilha criada
    cartas.push("OUROS");//<- CARTA DO FUNDO E PRIMEIRA A SER COLOCADA
    cartas.push("PAUS");
    cartas.push("COPAS");
    cartas.push("ESPADAS");//<- CARTA DO TOPO E ULTIMA A SER COLOCADA

cout << "SUAS CARTAS: " << cartas.size() << "\n";
    cout << "A CARTA DO TOPO E: " << cartas.top() << "\n\n";//EXIBE A CARTA NO TOPO
        cartas.pop();//RETIRA A CARTA DO TOPO

cout << "SUAS CARTAS: " << cartas.size() << "\n";
    cout << "A CARTA DO TOPO E: " << cartas.top() << "\n\n";//EXIBE A CARTA NO TOPO
}
