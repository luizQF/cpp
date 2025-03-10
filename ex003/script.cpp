//INCREMENTOS
//pré -> ++n
//pós -> n++
//incremento -> n= n + 1 ("n" vai receber 1 ao seu valor)
//simplificação -> n+=1 (o mesmo só que simplificado)

/*exiba um número no comando, peça um número e adicione ele na variavel depois exiba ela com o número adicionado*/
#include <iostream>
using namespace std;

int main(){
    int maxTentativas = 3;//máximo de tentativas
    int valor;//valor atual
    int adicionar;//valor adicionado
    cout << "escolha um numero de 1 a 100\n";
    cin >> valor;
    for(int tentativas = 0; tentativas < maxTentativas; tentativas++){//laço usando o incremento
        cout << "insira um valor para somar com seu valor atual" << "\n\n valor atual:" << valor << "\n\n Adicionar:  " << endl;/*pede um valor para adicionar*/
        cin >> adicionar;//valor atribuido em adicionar
        if((adicionar < 1) || (adicionar > 100)){
            cout << "insira um valor entre 1 e 100" << "\n\n" << "tentativas restantes: " << (maxTentativas - tentativas) - 1 << endl;
        }else{
            cout << "sucesso numero: " << adicionar << " adicionado\n\n" << "Valor atual: " << (adicionar + valor);
            break;
        }
    }
    

}