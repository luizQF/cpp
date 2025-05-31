#include <iostream>
using namespace std;
void contador(int n1, int conte = 0);
int main(){
    contador(20, 2);
    return 0;
}
void contador(int n1, int conte){
    if(n1 >= conte){
        if(n1 == conte){
            cout << conte; 
        }else{
            cout << conte << " ... ";
        }
        return contador(n1, ++conte);//a função cria uma nova função com os novos parametros
    }  
}