#include <iostream>
#include <cmath>

int main() {
    double base = 5;
    double exponent = 3;
    double result = std::pow(base, exponent);

    // Displays the format: base^exponent = result
    std::cout << base << "^" << exponent << " = " << result << std::endl;
    // Output: 5^3 = 125

    return 0;
}

