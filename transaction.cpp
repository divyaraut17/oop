#include <iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int choice;
    double amount;
    double transactionHistory[5];  // Array to store last 5 transactions
    int transactionCount = 0;      // To keep track of the number of transactions

    // Display bank heading
    cout << "**********\n";
    cout << "Welcome to XYZ Bank\n";
    cout << "**********\n";

    while (true) {
        cout << "\nTransactions\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Last 5 Transactions\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    // Save transaction in the history
                    if (transactionCount < 5) {
                        transactionHistory[transactionCount++] = amount;
                    } else {
                        // Shift transactions to make space for the new one
                        for (int i = 1; i < 5; i++) {
                            transactionHistory[i - 1] = transactionHistory[i];
                        }
                        transactionHistory[4] = amount;
                    }
                    cout << "Deposited: " << amount << "\n";
                } else {
                    cout << "Invalid amount!\n";
                }
                break;

            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    // Save transaction in the history
                    if (transactionCount < 5) {
                        transactionHistory[transactionCount++] = -amount; // Store as negative for withdrawals
                    } else {
                        // Shift transactions to make space for the new one
                        for (int i = 1; i < 5; i++) {
                            transactionHistory[i - 1] = transactionHistory[i];
                        }
                        transactionHistory[4] = -amount; // Store as negative for withdrawals
                    }
                    cout << "Withdrawn: " << amount << "\n";
                } else {
                    cout << "Invalid or insufficient balance!\n";
                }
                break;

            case 3:
                cout << "Current Balance: " << balance << "\n";
                break;

            case 4:
                cout << "Last 5 Transactions:\n";
                if (transactionCount == 0) {
                    cout << "No transactions yet.\n";
                } else {
                    for (int i = 0; i < transactionCount; i++) {
                        if (transactionHistory[i] > 0) {
                            cout << "Deposited: " << transactionHistory[i] << "\n";
                        } else {
                            cout << "Withdrawn: " << -transactionHistory[i] << "\n";  // Print as positive
                        }
                    }
                }
                break;

            case 5:
                cout << "Exiting program.\n";
                return 0;

            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
