/*
Noah O'Connor
DS2 - Dr. Coffey
Project 1
T/R 4:00 - 5:15pm
*/

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <iostream>
#include <fstream>
using namespace std;

class hashTable
{
	private:
		ifstream fin;
		int counter = 0;
		string userID;
		string password;
		hashTable array[counter];
		hashTable *next = NULL;
	public:
		void makeHashTable();
		void hash(string userID);
};

#endif
