#include <iostream>
using namespace std;
int main(){
    int num = 0; //inicializando a variavel de while 
    while(num < 20){//verifica se num é menor que 20 e repete o comando até a comparação ser falsa
        cout << "Contagem - " << num << "\n\n";
        num ++; //incrementa num em 1 a cada laço
    }

    //outra forma de fazer
    int num2 = 0;
    while((num2 += 2) < 20){
        /*podemos fazer o incremento dentro da propria condição nesse exemplo utilizamos num += 2, ou seja a cada laço num vai aumentar seu valor em 2, sendo assim 2 4 6 ... perceba que está entre parenteses pois precisamos alertar ao computador que num precisa ser atribuido primeiro*/
        cout << "Exatamente a mesma coisa porem mais limpo (e a contagem e feita em 2 + 2 ate vinte)... " << num2 << endl;
    }

    //do while -> executa e depois verifica ou seja ao chegar em 20 ele executaria depois pararia o bloco. diferente do while que pararia antes do contador atingir 20.
    int num3 = 0;
    do{
        cout << "\nexecutando para depois verifica\n" << num3;
    }while(num3++ < 20);


    return 0;
}

    

