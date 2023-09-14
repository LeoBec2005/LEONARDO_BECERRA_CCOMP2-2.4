#include <iostream>
#include <string>
using namespace std;

int main(){

    int n = 1;
    int x = 0;
    int a = 0;
    int sum;
    while (a<4000000){
        if (1){
            a = x + n;
            x = n;
            n = a;
            sum = a;
            sum = sum + sum;
            cout<<sum<<endl;
        }
    }
    return 0;
}