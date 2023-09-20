#include <iostream>
#include <vector>

bool isPrime(long long num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (long long i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    long long limit = 2000000;
    long long sum = 0;

    for (long long i = 2; i < limit; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    std::cout << sum << std::endl;

    return 0;
}