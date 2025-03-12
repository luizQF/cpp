//peça um número e some ele pelo seu antecessor
#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "insira um número\n";
    cin >> num;
    int armazenar = 0;
    for(int i = num; i > 0; i--){
        armazenar += i;
    }
    cout << armazenar << ", ";
}