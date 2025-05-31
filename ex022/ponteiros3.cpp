#include <iostream>
using namespace std;
void alterarNum(int* p);
int main(){
    int num = 10;
    alterarNum(&num);
    cout << num;
    return 0;
}
void alterarNum(int* p){
    *p = 20;
}