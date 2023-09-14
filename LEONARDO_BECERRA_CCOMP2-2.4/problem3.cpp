#include <iostream>
#include <string>
using namespace std;

int main(){
    long long int x = 600851475143;
    int n = 1;

    while(n<x){
        if((x%2 != 0) && (x%n == 0)){
            cout<<n<<endl;
        }
    n = n+1;   
    }

    return 0;
}