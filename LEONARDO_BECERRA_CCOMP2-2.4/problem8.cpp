#include <iostream>
#include <string>

int main() {
    std::string numStr =
        "731671765313306249192251196744265747423553491949349698352031277450632623957831801698480186947885184385861560789112949495459501737958331952853208805511254069874715852386305071569329096329522744304355766896648950445244523161731856403098711121722383113622298934233803081353362766142828064444866452387493035890729629049154073391073819919874570883963077520181108277815711075235217055495351";

    const int adjacentDigits = 13;
    long long maxProduct = 0;

    for (int i = 0; i < numStr.length() - adjacentDigits; ++i) {
        long long product = 1;
        for (int j = 0; j < adjacentDigits; ++j) {
            product *= numStr[i + j] - '0';
        }
        if (product > maxProduct) {
            maxProduct = product;
        }
    }

    std::cout <<  adjacentDigits  << maxProduct << std::endl;

    return 0;
}






