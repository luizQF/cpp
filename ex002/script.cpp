/*variaveis em c++, definimos o tipo depois o nome e opcionalmente o valor ex:*/
#include <iostream>
using namespace std;
#define pi 3.14; // <- const global
bool par = 8 % 2 == 0;//variavel global
int main(){
    int n1; //definindo variavel sem valor. (numero inteiro)
    int n2 = 10; //variavel com valor.
    float n3; //numero real porem com menos precisão
    double n4;//numero real preciso

    //outros tipos de variaveis
    bool trueOrFalse; //como o nome sugere recebe um valor verdadeiro ou falso, sendo 1 verdadeiro e 0 falso (boolean)
    string nome = "luiz"; //como o nome sugere recebe uma string como valor

    char letra = 'a'; /*recebe um caractere como valor (caso a variavel receba o nome "luiz" o valor inserido na variavel seria 'l' que fica entre aspas simples). Podemos aumentar a quantidade de char utilizando char[2] ou mais para aumentar o maximo de caracteres*/
    return 0;
}