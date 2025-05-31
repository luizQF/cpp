//Fib = fib(n - 1) + fib(n - 2)
#include <iostream>
using namespace std;
int fib(int n);
int main(){
    cout << fib(8);
    return 0;
}
int fib(int n){
    //casos base
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}