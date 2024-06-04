#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "Factorial of negative number is not defined." << std::endl;
    } else {
        std::cout << "Factorial of " << number << " is " << factorial(number) << std::endl;
    }

    return 0;
}
