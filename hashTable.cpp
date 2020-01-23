#include "hashTable.hpp"
#include <iostream>

using namespace std;

void hashTable::makeHashTable()
{
	fin.open("encrypted.txt");
	string line;
	while(getline(fin,line))
	{
		counter++;
	}
	
	for (int i = 0; i < counter; i++)
	{
		
	}
}

void hashTable::hash(string userID)
{
	this->userID = userID;	
}
