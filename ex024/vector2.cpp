#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>numeros = {10, 20, 30, 40, 50, 60};
    vector<int>::iterator it;
        it = numeros.begin();
        advance(it, 5);
    
    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << endl;
    }

    numeros.insert(it, 0);//podemos o insert sem iterator numeros.insert(numeros.begin() + 1)

    for(int i = 0; i < numeros.size(); i++){
        cout << numeros[i] << endl;
    }

    return 0;
}