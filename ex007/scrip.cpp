//SWITCH E CASE
#include <iostream>
using namespace std;
int main(){
    //ESCOLHA DE COR
    int cor;
    cout << "ESCOLHA UMA COR: (digite apenas o numero)\n  [1-VERDE] [2-AZUL] [3-VERMELHO]\n";
    cin >> cor;// resposta armazenada na variavel cor
    
    switch(cor){//comparando qual número foi escolhido
        case 1:
            cout << "\nCOR VERDE SELECIONADA\n\n"; //se o numero 1 tiver sido escolhido esse bloco será executado e assim por diante
            break;
        case 2:
            cout << "\nCOR AZUL SELECIONADA\n\n";
            break;
        case 3: 
            cout << "\nCOR VERMELHA SELECIONADA\n\n";
            break;
            
    default://se nenhum bloco corresponder essa mensagem ira aparecer
        cout << "\n[ERROR] ENTRADA INVALIDA\n\n";
        break;
    }
    //FIM
    
    //SWITCH ANINHADO
    int veiculo;
    cout << "SELECIONE UM VEICULO: (digite apenas o numero) \n [1-CARRO] [2-MOTO] [3-AVIAO] [4-HELICOPTERO] \n";
    cin >> veiculo;
    switch(veiculo){//verifica o valor inserido
        //caso 1 ou 2 o bloco abaixo do 2 será executado
        case 1:
        case 2:
            cout << "\nVEICULO TERRESTRE SELECIONADO:";

            switch(veiculo){/*switch aninhado dentro do bloco do case2 para definir o veiculo escolhido se o número entre 1 ou 2 escolhido foi 1 o veiculo será um carro e vice versa*/
                case 1: 
                    cout << "\n CARRO";
                    break;
                case 2:
                    cout << "\n MOTO";
                    break;
            }
        break;

        //caso 3 ou 4
        case 3:
        case 4:
            cout << "\nVEICULO AEREO SELECIONADO:";

            switch(veiculo){//switch aninhado para indicar qual elemento do grupo foi indicado
                case 3: 
                    cout << "\n AVIAO";
                    break;
                case 4:
                    cout << "\n HELICOPTERO";
                    break;
            }
        break;

    default:
        cout << "\n[ERROR] ENTRADA INVALIDA\n\n";
        break;
    }

    return 0;
}