// Muhammad Hafiz bin Ahmad Soupian
// A17DW2171

//its just an array example
//find the sum of all the value inside the array

#include <iostream>

using namespace std;

int ary[10]={12, 3, 23, 23, 2, 2, 5, 6, 9, 10};

int n, result=0;

int main()
{
	for(n = 0; n < 10; n++/* n is not more than 10*/)
	{
		result += ary[n];
	}
	cout<<result;
}
