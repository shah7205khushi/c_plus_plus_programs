//function overloading

#include<string.h>
#include<iostream>
using namespace std;

int add(int a,int b)
{
	return (a+b);
}

int add(int a,int b,int c)
{
	return(a+b+c);
}

int main()
{
	cout<<add(3,4);
	cout<<" "<<add(3,4,5);
	return(0);
}

//output

//7 12
