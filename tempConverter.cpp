#include <iostream>

int main() {
    double celsius, fahrenheit;
    char choice;

    std::cout << "Choose conversion: \nC to F (Enter C) \nF to C (Enter F): ";
    std::cin >> choice;

    if (choice == 'C' || choice == 'c') {
        std::cout << "Enter temperature in Celsius: ";
        std::cin >> celsius;
        fahrenheit = (celsius * 9/5) + 32;
        std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
    } else if (choice == 'F' || choice == 'f') {
        std::cout << "Enter temperature in Fahrenheit: ";
        std::cin >> fahrenheit;
        celsius = (fahrenheit - 32) * 5/9;
        std::cout << "Temperature in Celsius: " << celsius << std::endl;
    } else {
        std::cout << "Invalid choice" << std::endl;
    }

    return 0;
}
