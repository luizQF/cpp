#include <iostream>
using namespace std;
int main(){
    //MATRIZ//declaramos uma matriz cubica inteira ou seja ela vai ter 3 linhas e 3 colunas
    int matriz[3][3] = {
        10, 20, 30,
        40, 50, 60
        ,80, 90, 99
    }; 
    
    //atribuição de forma mais rapida acima...
    /*matriz[0][0] = 20; 
    matriz[0][1] = 30; 
    matriz[0][2] = 40;
    matriz[1][0] = 50;
    matriz[1][1] = 60;
    matriz[1][2] = 70;
    matriz[2][0] = 80;
    matriz[2][1] = 90;
    matriz[2][2] = 100;*/

    

    

    /*cout << matriz[0][0] << endl; 
    cout << matriz[0][1] << endl; 
    cout << matriz[0][2] << endl;
    cout << matriz[1][0] << endl;
    cout << matriz[1][1] << endl;
    cout << matriz[1][2] << endl;
    cout << matriz[2][0] << endl;
    cout << matriz[2][1] << endl;
    cout << matriz[2][2] << endl;*/
    //VAMOS AUTOMATIZAR
    int l,c;
    for(l = 0; l < 3; l++){//começa a iteração com l valendo 0
       
        for(c = 0; c < 3; c++){/*permanece no for até a condição ser falsa dps volta para o primeiro laço onde l++,  e o laço se reinicia com L valendo 1 e assim por diante até l antigir a condição*/
            cout << "|";
            cout << matriz[l][c] << " ";
            cout << "|";
        }
        
        cout << "\n";
    }

    return 0;
}