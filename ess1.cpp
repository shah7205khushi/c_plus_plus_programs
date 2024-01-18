//reference variable

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int a=10;
	int & b=a;
	
	cout<<"b= "<<b<<endl;
	
	b=b+20;
	cout<<"a= "<<a<<endl;
	return 0;
}

//output

//b= 10
//a= 30
