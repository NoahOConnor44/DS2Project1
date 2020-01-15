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
	
	while(getline(fin,line))
	{
		counter++;	
		int space = line.find(' ');
		line = line.substr(0, space);
		cout << line << " " << createPassword() << endl;
		fout << line << " " << createPassword() << endl;
		
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
		randomLetter = (rand() % 26) + 97; // 97 - 122 are lowercase chars on the ascii table.
		output << randomLetter;
	}
	
	return output.str();
	
}
