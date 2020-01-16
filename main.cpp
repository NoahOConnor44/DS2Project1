#include <iostream>
#include "userInformation.hpp"

using namespace std;

int main ()
{
	userInformation userinfo;
	userinfo.loadLastNames();
	userinfo.loadRawPasswords();
	return 0;
}
