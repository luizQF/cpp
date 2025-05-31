#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> sequencia;
    list<int>::iterator it;
    int tam = 10;
    for(int i = 0; i < tam; i++){
        sequencia.push_front(i);
    }
    tam = sequencia.size();
    it = sequencia.begin();//iniciamos o iterator com a posição inicial da sequencia
    advance(it, 5);//avançamos até a posição 5
    sequencia.insert(it, 0);// colocamos 0 na posição 5
    for(int i = 0; i < tam; i ++){
        cout << sequencia.front() << endl;
        sequencia.pop_front();
    }
    return 0;
}