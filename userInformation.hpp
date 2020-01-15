#ifndef USERINFORMATION_H
#define USERINFORMATION_H

#include <iostream>
#include <fstream>
using namespace std;

class userInformation
{
	private:
		int counter = 0; // testing
		ifstream fin;
		string userID;
		string password;
		string encryptedPassword;
		string key;
	public:
		userInformation();
		void loadLastNames();
		void createPassword();
		
	
};

#endif
