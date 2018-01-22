//use the string compare function to compare input string with the setup string
//make a check with the string password(if else)

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char strPswd[80];

	cout<<"Enter password: ";
	
	//get the strPswd
	cin >> strPswd;
	
	//make an if else that check the password(strPswd)
	//(string compare function (strPswd,"Check")) 
		if (strcmp(strPswd,"Check") != 0)
			cout<<"invalid password "<<endl;
	
	 	else 
			cout<<"Logged in "<<endl;

	

	return 0;
}
