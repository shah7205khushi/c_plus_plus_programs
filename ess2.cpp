//Manipulators

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int a=10;
	cout<<a<<endl;
	cout<<setw(a)<<endl;
	
	float b=100/3.0;
	cout<<b<<endl;
	cout<<setprecision(2)<<b<<endl;
	cout<<setw(10)<<setprecision(2)<<b<<endl;
	return 0;	
}

/*

10

   33.3333
33
        33
*/
