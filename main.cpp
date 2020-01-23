#include <iostream>
#include "userInformation.hpp"
#include "hashTable.hpp"
using namespace std;

int main ()
{
	userInformation userinfo;
	hashTable hash;
	
	userinfo.loadLastNames();
	userinfo.loadRawPasswords();
	hash.makeHashTable();
	
	return 0;
}
