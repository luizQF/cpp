#include <iostream>
#include <stack>
using namespace std;
int main(){
    
    //PILHA STACK
    stack <char> valores;
    //Pilha de valores
    valores.push('a');
    valores.push('c');
    valores.push('e');
    valores.push('y');
    bool empty = (valores.size() == 0);
   
    cout << "Valores disponiveis: ";
    while(!empty){
            cout << valores.top();
            valores.pop();
        empty = (valores.size() == 0);
    }
    

    return 0;
}