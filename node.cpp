#include "node.hpp"
#include <iostream>

using namespace std;

Node::Node()
{
	
}

void Node::setPassword(string password)
{
	this->password = password;
}

void Node::setUserID(string userID)
{
	this->userID = userID;
}

string Node::getPassword()
{
	return this->password;
}

string Node::getUserID()
{
	return this->userID;
}

void Node::addNode(string userID, string password)
{
	
}

bool Node::search(string userID)
{
	
}
