//debugging exercises

//3.4

/*

#include<iostream.h>
#define pi 3.14

int squarearea(int &);
int circlearea(int &);

void main()
{
	int a=10;
	cout<<squarearea(a)<<" ";
	cout<<circlearea(a)<<" ";
	cout<<a << endl;
}

int squarearea(int &a)
{
	return a*== a;
}

int circlearea(int &r)
{
	return r=pi * r * r;
}

*/

#include<iostream>
using namespace std;
#define pi 3.14

int squarearea(int &);
int circlearea(int &);

int main()
{
	int a=10;
	cout<<squarearea(a)<<" ";
	cout<<circlearea(a)<<" ";
	cout<<a << endl;
	
	return 0;
}

int squarearea(int &a)
{
	return a * a== a;
}

int circlearea(int &r)
{
	return r=pi * r * r;
}

//output:0 314 314
