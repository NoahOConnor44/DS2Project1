/*
Noah O'Connor
DS2 - Dr. Coffey
Project 1
T/R 4:00 - 5:15pm
*/

#ifndef USERINFORMATION_H
#define USERINFORMATION_H

#include <iostream>
#include <fstream>
using namespace std;

class userInformation
{
	private:
		int counter = 0;
		ifstream fin;
		ofstream fout;
		string userID;
		string password;
		string encryptedPassword;
	public:
		userInformation();
		void loadLastNames();
		void loadRawPasswords();
		string createPassword();
		string encryptPassword(string& password);
};

#endif
