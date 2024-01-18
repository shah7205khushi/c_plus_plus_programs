//swapping two integers

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int a,b;
	void swap(int,int);
	cout<<"enter two int no"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	return 0;
}

void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}

/*

enter two int no
32
87
a= 32
b= 87

*/
