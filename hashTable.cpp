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
	array = new Node[counter];

	for (int i = 0; i < counter; i++)
	{
		array[i].setUserID("test");
		cout << "user " << i << " id is: " << array[i].getUserID() << endl;
	}
}

void hashTable::hash(string userID, string password)
{
		
}
