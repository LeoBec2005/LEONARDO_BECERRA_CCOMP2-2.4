#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int x = 600851475143;
    long long int n = 1;

    while(n<x){
        if((n%2 > 0) && (x%n == 0)){
            cout<<n<<endl;
        }
    n = n+1;
    }
    return 0;
}