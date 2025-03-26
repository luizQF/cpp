#include <iostream>
using namespace std;
int somar(int n1, int n2);
void texto();
int main(){
    cout << somar(4, 5);
    texto();
    return 0;
}

void texto(){//void não retorna nada
    cout << "\nTIPO DE TEXTO\n";
}
int somar(int n1, int n2){
    int n3;
    n3 = (n1 + n2) * 2;
    n3--;
    return n3;
}