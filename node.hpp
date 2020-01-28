/*
Noah O'Connor
DS2 - Dr. Coffey
Project 1
T/R 4:00 - 5:15pm
*/

#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

class Node
{
	private:
		string userID;
		string password;
		Node* next = NULL;
	public:
		Node();
		void setUserID(string userID);
		void setPassword(string password);
		string getUserID();
		string getPassword();
		void addNode(string userID, string password);
		bool search(string userID);
};
#endif
