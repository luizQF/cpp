//INCREMENTOS
//pré -> ++n
//pós -> n++
//incremento -> n= n + 1 ("n" vai receber 1 ao seu valor)
//simplificação -> n+=1 (o mesmo só que simplificado)

/*exiba um número no comando, peça um número e adicione ele na variavel depois exiba ela com o número adicionado*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int gerarNum();
int main(){
    srand(time(0));
    int num1, num2 = gerarNum();
    cout << "Seu numero e: " << num2 << endl;
    cout << "escolha outro numero\n";
    cin >> num1;
    cout << "A SOMA DOS NUMEROS E " << num1 + num2 << endl;
    

    return 0;
}
int gerarNum(){
    const int tam = 100;
    int num[tam];

        for(int i = 0; i < tam; i++){
            num[i] = i;
        }
    
    int pos = rand() % (tam-1);
    int numC = num[pos];
    return numC;
}
