#include <iostream>
#include <string>

class BankAccount {
public:
    BankAccount(std::string owner, double balance) : owner(owner), balance(balance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            std::cout << "Deposited: $" << amount << std::endl;
        } else {
            std::cout << "Deposit amount must be positive." << std::endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn: $" << amount << std::endl;
        } else if (amount > balance) {
            std::cout << "Insufficient balance." << std::endl;
        } else {
            std::cout << "Withdrawal amount must be positive." << std::endl;
        }
    }

    void displayBalance() const {
        std::cout << "Current balance: $" << balance << std::endl;
    }

private:
    std::string owner;
    double balance;
};

int main() {
    BankAccount account("John Doe", 1000.0);

    int choice;
    double amount;

    do {
        std::cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\nEnter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter amount to deposit: ";
                std::cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                std::cout << "Enter amount to withdraw: ";
                std::cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.displayBalance();
                break;
            case 4:
                std::cout << "Exiting..." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
                break;
        }
    } while (choice != 4);

    return 0;
}
