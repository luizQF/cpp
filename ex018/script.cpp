#include <iostream>
using namespace std;
int main(){
    //ENUM -> CONJUNTO DE CONSTANTES INTEIRAS QUE ESPECIFICAM VALORES DE UMA VAR DO MESMO TIPO.
    enum armas{
        /*os valores por base são 0 e caso só o primeiro seja atribuido o restante se completara sequencialmente ou seja se revolver for = 10 rifle será 11 e fuzil 12 e assim por diante*/
        revolver = 15,
        rifle = 25,
        fuzil = 42,
        pistola = 20
    };
    armas selectedGun = revolver; // valores disponiveis para armas será os valores de enum com o nome armas
    cout << selectedGun;
}