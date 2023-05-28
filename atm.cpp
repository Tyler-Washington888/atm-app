#include <iostream>
using namespace std;


void showMenu(){
    cout << "*******MENU*******"<< endl;
    cout << "1. Check Balance"<< endl; 
    cout << "2. Make Deposit"<< endl;
    cout << "3. Make Withdrawal"<< endl;
    cout << "4. Exit"<< endl;
    cout << "******************"<< endl;
}

int main(){
    int option;
    double balance = 500;

    do {
        showMenu();
        cout << endl;
        cout << "Choose option: ";
        cin >> option;

        switch(option){
            case 1: 
                cout << endl;
                cout << "Your balance is $" << balance << endl;
                cout << endl;
                break;
            case 2: 
                double depositAmount;
                cout << endl;
                cout << "Enter deposit amount: ";
                cin >> depositAmount;
                cout << endl;
                balance += depositAmount;
                cout << "Your balance is now $" << balance << endl;
                cout << endl;
                break;
            case 3:
                double withdrawalAmount;
                cout << endl;
                cout << "Enter withdrawal amount: ";
                cin >> withdrawalAmount;
                cout << endl;
                if (balance - withdrawalAmount < 0){
                    cout << "Transaction cancled.. You don't have enough money to make a withdrawal" << endl;
                    cout << endl;
                }else{
                    balance -= withdrawalAmount;
                    cout << "Your balance is now $" << balance << endl;
                    cout << endl;
                }
                break;
        }
    }while(option != 4);

    cout << "Thanks for doing business with us today" << endl;

    return 0;
}   