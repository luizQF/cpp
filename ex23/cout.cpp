#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    //cout em hexadecimal, e octdecimal
    cout << hex << 129;


    float num = 51.2/3.7;

    cout.precision(4);//declarando a precisão do cout
    cout << endl << num << endl;  
    cout.precision(6);//voltando a precisão ao normal


    cout << setw(30) << setfill('*')<< "ola";//largura da variavel


    return 0;


}