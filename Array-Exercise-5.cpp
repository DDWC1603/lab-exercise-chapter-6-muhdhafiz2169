//using the random function, the program make it own random number and find the maximum random number and print it out.
//finish this program up
//thank you.

#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int i, max = 100, holder = 0;
	int list[100];

	//initialize the array with random values
	for(i = 0; i < max; i++ /*i<100*/) {
		list[i] = rand();
		cout << list[i] << endl;	
	}
	

	//find the maximum val * comparing holder
	for(i = 0; i < max; i++ /*i>100*/) {
		if (list[i] >= holder) {
			holder = list[i];
		}
	}
	
	cout << endl << "Maximum value is = " << holder;
}
