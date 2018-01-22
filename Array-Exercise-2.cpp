//this is not a complete program. please finish the program. thank you.


#include <iostream>
using namespace std;

int mark[5]={19,10,8,17,9};
int main() {
	int x;
	
	cout << "Prev Value on Xth element: " << mark[2] << endl;
	
	//insert different value to the third element
	//tukar third element tu dengan value lain
	mark[2]= 23; /*your value*/
	cout << "Current Value on Xth element: " << mark[2] << endl;

	//get user input and insert sub the third element
	//tukar the third element yang baru ditukar tu dengan input dari user
	cout << "Value of Xth element: ";
	cin >> x;

	//print the first element of the array
	cout << "First Element: " << mark[0] << endl;

	//print the ith element of the array
	cout << "Xth Element: " << mark[x];
}
