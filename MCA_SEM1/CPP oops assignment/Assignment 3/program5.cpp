/*
5. Create a class BankAccount with:
Private data members:
 accountNo
 balance
Static data member:
 totalAccounts
Implement:
 A constructor to initialize the account details.
 A friend function to display the private account details.
 A static member function to display the total number of accounts created.
Create at least three objects and demonstrate both the friend function and
static member function.
*/

#include <iostream>
#include <string>

class BankAccount {
private:
    int accountNo;
    double balance;

    static int totalAccounts;

public:
    // Constructor
    BankAccount(int accNo, double bal) {
        accountNo = accNo;
        balance = bal;
        totalAccounts++;
    }

    // Friend function
    friend void displayAccount(BankAccount account);

    // Static member function
    static void displayTotalAccounts() {
        std::cout << "Total accounts created = " << totalAccounts << std::endl;
    }
};

// Definition of static data member
int BankAccount::totalAccounts = 0;

// Friend function definition
void displayAccount(BankAccount account) {
    std::cout << "Account No: " << account.accountNo << std::endl;
    std::cout << "Balance: " << account.balance << std::endl;
}

int main() {
    BankAccount account1(101, 50000);
    BankAccount account2(102, 75000);
    BankAccount account3(103, 60000);

    std::cout << "Account 1:" << std::endl;
    displayAccount(account1);

    std::cout << "\nAccount 2:" << std::endl;
    displayAccount(account2);

    std::cout << "\nAccount 3:" << std::endl;
    displayAccount(account3);

    std::cout << std::endl;

    BankAccount::displayTotalAccounts();

    return 0;
}

