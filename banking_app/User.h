
#ifndef USER_H_
#define USER_H_
#include <iostream>
using namespace std;

class User {

	private:
		string name;
		string username;
		string dob;
		string userName;
		string setUser();
		int createPin();
		int pin = 0;
		float checkingAccount = 0;
		float savingsAccount = 0;

	public:
		User() : name("Unnamed"), dob("MMDDYYYY") {};
		User(string name, string dob) {};
		float showChecking();
		float showSavings();
		float makeDeposit();
		void menuScreen();
		void createAccount();
		~User();
		
};

#endif /* USER_H_ */