#include <iostream>
#include <ctime>
using namespace std;

int main(){
    time_t convHours; //criando uma variavel para armazenar os segundos desde 1970
    struct tm *data;//ponteiro da estrutura tm (*data) que ira armazenar dados elaborados como data ano etc
    time(&convHours);//obtem tempo atual em segundos desde 1 de janeiro de 1970
    data = localtime(&convHours);//convertendo de segundos para uma estrutura tm elaborada com data e ano
    int horas = data -> tm_hour;//acessando a hora usando a estrutura tm
    bool sol;//declarando uma variavel booleana sol

    if(horas > 6 && horas < 18){//checando se está de dia
        sol = true;//recebe true
    }else{
        sol = false;//recebe false
    }

    if (sol){//checando valor do sol
        cout << "esta fazendo sol\n" << horas;//se for true está de dia
    }else{
        cout << "sem sol";//se não for está de noite
    }
    return 0;
}