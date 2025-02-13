#include<iostream>
using namespace std;

class BankAccount {
    private:
        int acc_no;
        static int balance;  // Static variable to keep the balance common for all transactions

    public:
        class Transaction { //nested classs
            public:
                void withdraw() {
                    int amount;
                    cout << "Enter withdrawal amount: ";
                    cin >> amount;  
                    if(amount > balance) {
                        cout << "Insufficient balance!" << endl;
                    } else {
                        balance -= amount;
                        cout << "Withdraw amount: " << amount << endl;
                        cout << "Current balance: " << balance << endl;
                    }
                }
                
                void deposit() {
                    int amount;
                    cout << "Enter deposit amount: ";
                    cin >> amount;  
                    balance += amount;
                    cout << "Deposit amount: " << amount << endl;
                    cout << "Current balance: " << balance << endl;
                }
        };
};

// Static variable initialization
int BankAccount::balance =100000;  

int main() {
    BankAccount bl;
    BankAccount::Transaction t1;

    t1.deposit();   
    t1.withdraw();  

    return 0;
}
