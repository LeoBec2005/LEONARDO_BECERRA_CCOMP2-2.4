#include <iostream>
using namespace std;
int main() {
    int n = 100;
    
    int sumOfSquares = 0;
    int i = 1;
    while (i <= n) {
        sumOfSquares += i * i;
        i++;
    }
    int sum = (n * (n + 1)) / 2; 
    int squareOfSum = sum * sum;
    int d= squareOfSum - sumOfSquares;
    
    cout<<d<<endl;

    return 0;
}