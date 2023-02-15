#include <iostream>
#include "User.h"

using namespace std;

User::User() {
	
	float checkingAccount = 0;
	float savingsAccount = 0;
    
	string name;
	cout << "Enter your name: " << flush;
	cin >> name;

    string userName;
    cout << "Enter a username: " << flush;
    cin >> userName;

	int dob;
	cout << "Enter date of birth in mmddyyyy format: " << flush;
	cin >> dob;
    
    int pin = createPin();
    
    cout << "your pin is: " << pin << endl;
    cout << "user " << userName << " created." << endl;
	cout << "checking account: " << checkingAccount << endl;
	cout << "savings account: " << savingsAccount << endl;
   
}   

User::~User() {
	cout << "User deleted." << endl;
}
int User::createPin() {
    cout << "Create your pin: " << flush;
    cin >> pin;
    return pin;
}
string User::setUser() {
	string userName;
    
    int pinCheck = 0;
    cout << "Enter your pin: " << flush;
    cin >> pinCheck;

    
    if (pinCheck == pin) {
        cout << "Access Granted." << endl;
        cout << "New UserName: " << flush;
        cin >> userName;
    }
    else {
        cout << "Incorrect pin goodbye" << pin << endl;
    }

	return userName;
}

float User::showChecking() {
    cout << "You have a total balance of: $" << checkingAccount << endl;
    return checkingAccount;
}

float User::showSavings() {
    cout << "You have a total Savings balance of: $" << savingsAccount << endl;
    return savingsAccount;
}


float User::makeDeposit() {
    float depositAmount;
    int selection = 0;
    do {
        cout << "Enter '1' to deposit into checking" << endl;
        cout << "Enter '2' to deposit into savings" << endl;
        cout << "Enter: " << flush;
        cin >> selection;
        switch (selection) {
        case 1: {
            cout << "How much would you like to deposit into your checking account: $" << flush;
            cin >> depositAmount;
            checkingAccount = checkingAccount + depositAmount;
            return checkingAccount;
        }
        case 2:
            cout << "How much would you like to deposit into your savings account: $" << flush;
            cin >> depositAmount;
            savingsAccount = savingsAccount + depositAmount;
            return savingsAccount;
        }

    } while (selection != 1 || 2);
}
void User::menuScreen() {
    int selection = 0;
    string userName = userName;
    do {
        cout << "Welcome " << userName << endl;
        cout << "1. Update User info" << endl;
        cout << "2. Checking balance" << endl;
        cout << "3. Savings balance" << endl;
        cout << "4. Make deposit" << endl;
        cout << "5. End session" << endl;
        cout << "Please make your selection: " << flush;
        cin >> selection;
        switch (selection) {
            case 1: {
                userName = setUser();
                break;
            }
            case 2: {
                showChecking();
                break;
            }
            case 3:{
                showSavings();
                break;
                }
            case 4:{
                    makeDeposit();
                    break;
                }
            case 5:{
                break;
                }
       


        }
    } while (selection < 6);
}