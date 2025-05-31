#include <iostream>
using namespace std;
//recursividade de funções
void contador(int conteAte, int contagem = 0);
int main(){
    contador(20);
    return 0;
    

}
void contador(int conteAte, int contagem){
    cout << contagem << endl;
    if(contagem < conteAte){
        contador(conteAte, ++contagem);
    }
}