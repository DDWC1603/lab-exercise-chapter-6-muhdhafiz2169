//program to show a 3dimensional array
//complete the unfinish and problamatic program below
//thanks.

#include<iostream>

using namespace std;

int main()
{
	int array[10][10][10],dim1,dim2,dim3,i,j,k;
	
	cout<<"Enter the three dimensions size"<< endl;
	cout << "i :";
	cin >> dim1;
	
	cout << endl << "j :";
	cin >> dim2;
	
	cout << endl << "k :";
	cin >> dim3;
	
	cout<<"Enter elements of array"<<endl;

	for(i = 0; i < dim1; i++/*idim1*/)
		for(j = 0; j < dim2; j++/*jdim2*/)
			for(k = 0; k < dim3; k++/*kdim3*/)
			{
				cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]=" << endl;
				array[i][j][k];
			}

	cout<<"Displaying elements of array"<<endl;

	
	for(i = 0; i < dim1; i++/*idim1*/)
		for(j = 0; j < dim1; j++/*jdim2*/)
			for(k = 0; k < dim1; k++/*kdim3*/)
				cout<<"a["<<i<<"]["<<j<<"]["<<k<<"]="<<array[i][j][k]<<endl;
				
}
