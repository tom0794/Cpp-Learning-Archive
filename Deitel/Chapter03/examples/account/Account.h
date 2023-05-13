#include <string>
#include <iostream>

class Account {
    public:
        explicit Account(std::string accountName, int initialBalance)
            : name{accountName} {
            if (initialBalance > 0) {
                balance = initialBalance;
            }
        }

        void deposit(int amount) {
            if (amount > 0) {
                balance += amount;
            }
        }

        void withdraw(int amount) {
            if (amount <= balance) {
                balance -= amount;
            } else {
                std::cout << "Error: withdrawal amount cannot excede balance" << std::endl;
            }
        }

        int getBalance() const {
            return balance;
        }

        void setName(std::string accountName) {
            name = accountName;
        }

        std::string getName() const {
            return name;
        }

        void displayAccount() {
            std::cout << "Account name: " << name << std::endl;
            std::cout << "Account balance: " << balance << std::endl;
        }

    private: 
        std::string name;
        int balance{0};
}; 