#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(std::time(0));
    int randomNumber = std::rand() % 100 + 1;
    int guess;
    
    std::cout << "Guess the number between 1 and 100: ";

    do {
        std::cin >> guess;
        if (guess > randomNumber) {
            std::cout << "Too high! Try again: ";
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again: ";
        }
    } while (guess != randomNumber);

    std::cout << "Congratulations! You guessed the number." << std::endl;

    return 0;
}
