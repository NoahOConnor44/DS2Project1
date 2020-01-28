/*
Noah O'Connor
DS2 - Dr. Coffey
Project 1
T/R 4:00 - 5:15pm
*/

#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "node.hpp"
#include <iostream>
#include <fstream>
using namespace std;

class hashTable
{
	private:
		ifstream fin;
		int counter = 0;
		Node* array;
	public:
		void makeHashTable();
		void hash(string userID, string password);
};

#endif
