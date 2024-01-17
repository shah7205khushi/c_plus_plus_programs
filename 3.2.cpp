// use of new and delete operators

#include<iostream>
#include<conio.h>
using namespace std;

 main()
{
	int *arr;
	int size;
	
	cout<<"enter the size of the integer array:";
	cin>>size;
	
	cout<<"creating an array of size "<<size<<"..";
	arr=new int[size];
	
	cout<<"\nDynamic allocation of memory for array arr is successful.";
	
	delete arr;
	getch();
}

//output

/*

enter the size of the integer array:7
creating an array of size 7..
Dynamic allocation of memory for array arr is successful.

*/
