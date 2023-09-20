#include <iostream>

int main() {
    int targetSum = 1000;
    
    for (int a = 1; a < targetSum; ++a) {
        for (int b = a + 1; b < targetSum; ++b) {
            int c = targetSum - a - b;
            if (a * a + b * b == c * c) {
                std::cout << "The Pythagorean triplet with a + b + c = 1000 is: " << a << ", " << b << ", " << c << std::endl;
                std::cout << "The product of a, b, and c is: " << a * b * c << std::endl;
                return 0;
            }
        }
    }
    
    return 0;
}






