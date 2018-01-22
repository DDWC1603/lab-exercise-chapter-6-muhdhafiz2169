//append char1 with char2 with the right string function.
//and display both char1 and char2
#include <iostream>
#include <string.h>

using namespace std;

int main(){

	char char1[11], char2[21];

	strcpy(char1,"haillo");
	strcpy(char2," there");

	cout<<char1<<endl;
	cout<<char2<<endl;

	return 0;
}
