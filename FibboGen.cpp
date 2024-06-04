#include <iostream>

void printFibonacci(int terms) {
    unsigned long long t1 = 0, t2 = 1, nextTerm = 0;

    std::cout << "Fibonacci Sequence: ";

    for (int i = 1; i <= terms; ++i) {
        if (i == 1) {
            std::cout << t1 << ", ";
            continue;
        }
        if (i == 2) {
            std::cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        std::cout << nextTerm << ", ";
    }
    std::cout << "\b\b " << std::endl;  // To remove the trailing comma and space
}

int main() {
    int terms;
    std::cout << "Enter the number of terms: ";
    std::cin >> terms;

    if (terms <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
    } else {
        printFibonacci(terms);
    }

    return 0;
}
