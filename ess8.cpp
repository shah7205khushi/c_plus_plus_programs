//swapping two integers

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int a,b;
	void swap(int &,int &);
	cout<<"enter two int no"<<endl;
	cin>>a>>b;
	swap(a,b);
	cout<<"a= "<<a<<endl;
	cout<<"b= "<<b<<endl;
	return 0;
}

void swap(int & p ,int & q)
{
	int temp;
	temp=p;
	p=q;
	q=temp;
}

/*

enter two int no
56
87
a= 87
b= 56

*/
