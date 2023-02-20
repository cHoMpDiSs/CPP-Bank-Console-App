// banking_app.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "User.h"

int main()
{
    int selection;
    cout << "Welcome" << endl;
    cout << "Press '1' to make a new account" << endl;
    cout << "Press '2' to exit: " << flush;
    cin >> selection;

    while (true) {
        if (selection == 1) {
            User* user = new User();
            user->createAccount();
            user->menuScreen();
                        
        }
        else {
            cout << "Goodbye!" << endl;
            return 0;
        }
    }

       
    
    return 0;
}

