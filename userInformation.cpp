#include "userInformation.hpp"
#include <iostream>

using namespace std;

userInformation::userInformation()
{

}

void userInformation::loadLastNames()
{
	string line;
	fin.open("lastNames.txt");
	while(!fin.eof())
	{
		getline(fin,line);
		counter++;
		int space = line.find(' ');
		line = line.substr(0, space);
		cout << line << " " << counter << endl;
	}
	fin.close();
}
