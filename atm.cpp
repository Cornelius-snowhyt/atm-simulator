#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() { 
    //====Author: CORNELIUS-SNOWHYT========
    //Simple ATM Simulator

    string pin = "3210";
    string enteredPin;
    double balance = 15000.50;
    int choice;

    cout << "================================================\n";
    cout << "   Welcome to CORNELIUS-SNOWHYT's ATM Simulator\n";
    cout << "================================================\n";

    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) { 
        cout << "Invalid PIN. Access denied.\n";
        return 0;
    }
    do { 
        cout << "\n1. Check Balance\n";
        cout << "\n2. Deposit\n";
        cout << "\n3. Withdrawal\n";
        cout << "\n4. Exit'n";
        cout << "Choose option: ";
        cin >> choice;

        if (choice == 1) { 
            cout << "You balance is: GHC" << fixed << setprecision(2) << balance << "\n";

        }
        else if (choice == 2) { 
            double deposit;
            cout << "Enter amount to deposit: GHC";
            cin >> deposit;
            balance += deposit;
            cout << "Deposit successful. New balnace: GHC" << balance << "\n";

        }
        else if (choice == 3) { 
            double withdraw;
            cout << "Enter amount to withdraw: GHC";
            cin >> withdraw;
            if (withdraw > balance) { 
                cout << "Insufficient funds!\n";

            } else { 
                balance -= withdraw;
                cout << "Withdrawal successful. New balance: GHC" << balance << "\n";

            }

        }
        else if (choice == 4) {
            cout << "Thank you for using CORNELIUS-SNOWHYT's ATM. Goodbye!\n";
        } else {
            cout << "Invalid option. Try again.\n";
        }
    } while (choice  != 4);
    return 0; 

}