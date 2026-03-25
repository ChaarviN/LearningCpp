#include <iostream>
#include <iomanip>
using namespace std;    

void showBalance(double balance);
double deposit();
double withdraw(double balance);

int main() {
    double balance = 0;
    int choice;

    do {
        cout << "1. Show Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        cin.clear();
        fflush(stdin); 

        switch(choice) {
            case 1:
                showBalance(balance);
                break;
            case 2:
                balance += deposit();
                showBalance(balance);
                break;
            case 3:
                balance -= withdraw(balance);
                showBalance(balance);
                break;
            case 4:
                cout << "Exiting..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;    
        }
    } while(choice != 4);

    return 0;
}

void showBalance(double balance) {
    cout << "Your current balance is: $" << setprecision(2) << fixed << balance << endl;
}
double deposit() {
    double amount;
    cout << "Enter amount to deposit: ";
    cin >> amount;

    if (amount < 0) {
        cout << "Invalid amount. Deposit must be positive." << endl;
        return 0;
    }
    return amount;
}
double withdraw(double balance) {

    double amount;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    if (amount > balance) {
        cout << "Insufficient funds." << endl;
        return 0;
    } 
    else if (amount < 0) {
        cout << "Invalid amount. Withdrawal must be positive." << endl;
        return 0;
    }
    else {
    return amount;
    }
}