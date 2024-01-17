#include<iostream>
#include<conio.h>
using namespace std;

long fact(int n)
{
	if(n==0)
	return 1;
	
	return (n*fact(n-1));
}

int main()
{
	int num;
	cout<<"enter a positive integer:";
	cin>>num;
	
	cout<<"factorial of "<<num<<" is "<<fact(num);
	
	return 0;
}

//output

/*

enter a positive integer:5
factorial of 5 is 120
--------------------------------
*/
