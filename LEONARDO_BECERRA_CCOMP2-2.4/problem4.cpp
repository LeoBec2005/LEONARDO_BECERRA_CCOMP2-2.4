#include <iostream>

bool isPalindrome(int number) {
    int originalNumber = number;
    int reverse = 0;

    while (number > 0) {
        int digit = number % 10;
        reverse = reverse * 10 + digit;
        number /= 10;
    }

    return originalNumber == reverse;
}

int main() {
    int largestPalindrome = 0;

    for (int i = 100; i <= 999; ++i) {
        for (int j = 100; j <= 999; ++j) {
            int product = i * j;

            if (isPalindrome(product) && product > largestPalindrome) {
                largestPalindrome = product;
            }
        }
    }

    std::cout << "The largest palindrome made from the product of two 3-digit numbers is: " << largestPalindrome << std::endl;

    return 0;
}