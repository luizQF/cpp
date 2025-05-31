#include <iostream>
using namespace std;
int fatorial(int n);
int main(){
    cout << "DIGITE UM VALOR FATORIAL: ";
        int val = 0;
            cin >> val;
        int res = val;
    cout << "5! = " ;
    for(int i = val; i != 0; i--){
        if(val == 0){
            break;
        }else if(val == 1){
            cout <<  val;
        }else{
            cout << val-- << " * ";
        }
    }
    cout << " = " << fatorial(res);
    return 0;
}
int fatorial(int n){
    if(n == 1) return 1;
    return (n * fatorial(n-1));
}