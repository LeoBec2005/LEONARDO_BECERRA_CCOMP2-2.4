#include <iostream>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num == 2) {
        return true;
    }
    if (num % 2 == 0) {
        return false;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2;

    while (true) {
        if (isPrime(num)) {
            count++;
            if (count == 10001) {
                std::cout << num << std::endl;
                break;
            }
        }
        num++;
    }

    return 0;
}