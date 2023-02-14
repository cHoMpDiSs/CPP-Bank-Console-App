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
string User::updateUser() {
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

float User::makeDeposit() {
	float depositAmount;
	cout << "How much would you like to deposit?" << flush;
	cin >> depositAmount;
	checkingAccount += depositAmount;
	cout << "You now have a balance of: $" << checkingAccount << endl;
	return checkingAccount;
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
        cout << "5. Delete account" << endl;
        cout << "6. End session" << endl;
        cout << "Please make your selection: " << flush;
        cin >> selection;
        switch (selection) {
            case 1: {
                userName = updateUser();
                break;
            }
            case 2: {
                showChecking();
                break;
            }
            case 3:{
                    cout << "You have a total balance of: $" << savingsAccount << endl;
                    break;
                }
            case 4:{
                    makeDeposit();
                    break;
                }
            case 5:{
                break;
                }
            case 6:{
                break;
                }


        }
    } while (selection < 7);
}