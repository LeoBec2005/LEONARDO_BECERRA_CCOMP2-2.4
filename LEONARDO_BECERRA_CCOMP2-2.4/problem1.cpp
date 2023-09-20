#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int number = 1;
    int sum = 0;
    while(x<1000){
        if ((number%5 == 0) || (number%3 == 0)){
            sum = number + sum;
            x = x+1;
            number = number + 1;
            cout<<sum<<endl;
        }
        else {
            x = x+1;
            number = number + 1;
            cout<<sum<<endl;
        }
    }


    cout<<sum<<endl;



    return 0 ;
}