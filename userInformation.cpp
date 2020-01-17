#include "userInformation.hpp"
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <time.h>

using namespace std;

userInformation::userInformation()
{

}

void userInformation::loadLastNames()
{
	string line;
	fin.open("lastNames.txt");
	fout.open("raw.txt");
	srand(time(0));
	
	// Read last names from the original file and create the raw password.
	while(getline(fin,line))
	{
		counter++;	
		int space = line.find(' ');
		line = line.substr(0, space);
		fout << line << " " << createPassword() << endl;
	}
	fin.close();
	fout.close();
}

void userInformation::loadRawPasswords()
{
	string line;
	fin.open("raw.txt");
	fout.open("encrypted.txt");
	
	while(getline(fin,line))
	{
		int space = line.find(' ');
		string userID = line.substr(0,space);
		line = line.substr(space+1, line.length());
		fout << userID << " " << encryptPassword(line) << endl;
	}
	fin.close();
	fout.close();
}

string userInformation::createPassword()
{	
	ostringstream output;
	char randomLetter;
	
	for(int i = 0; i < 9; i++)
	{
		randomLetter = (rand() % 26) + 97;
		output << randomLetter;
	}
	
	return output.str();
}

string userInformation::encryptPassword(string& password)
{
	ostringstream encryptedPass;
	string key = "jones";
	char letters[] = {'j','o','n','e','s'};
	int counter = 0;
	
	// makes the key the same length as the password
	while(key.length() < password.length())
	{				
		if (counter == 4)
		{
			key = key + letters[counter];
			counter = 0;
		}
		else
		{
			key = key + letters[counter];
			counter++;		
		}
	}
	
	int passLength = password.length();
	
	for (int i = 0; i < passLength; i++)
	{
		int difference = password.at(i) - 97;
		
		if (key.at(i) + difference > 122)
		{
			int wrap = key.at(i) + difference;
			wrap = wrap - 122;
			encryptedPass << char(97 + wrap-1);
		}
		else
		{
			encryptedPass << char(key.at(i) + difference);
		}
	}
	
	return encryptedPass.str();
}
