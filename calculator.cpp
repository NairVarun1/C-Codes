#include <iostream>

int main() {
    char operation;
    float num1, num2;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> operation;

    std::cout << "Enter two operands: ";
    std::cin >> num1 >> num2;

    switch(operation) {
        case '+':
            std::cout << num1 << " + " << num2 << " = " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << num1 << " * " << num2 << " = " << num1 * num2 << std::endl;
            break;
        case '/':
            if(num2 != 0)
                std::cout << num1 << " / " << num2 << " = " << num1 / num2 << std::endl;
            else
                std::cout << "Division by zero error!" << std::endl;
            break;
        default:
            std::cout << "Invalid operator" << std::endl;
            break;
    }

    return 0;
}
