 // Inline function
#include<iostream>
using namespace std;

int add(int,int);
void do_something();
void swap (int &,int &);

inline float area_circle(int radius)
{
	return(3.14*radius*radius);
}

int main()
{
	int a=5,b=10;
	cout<<add(5,7);
	do_something();
	cout<<endl<<a<<" "<<b;
	swap(a,b);
	cout<<endl<<"after swapping a and b are"<<a<<" "<<b;
	cout<<endl<<"area is:"<<area_circle(3);
	return(0);
}

int add(int x,int y)
{
	return(x+y);
}

void do_something()
{
	cout<<"\nI am doing something";
}

void swap(int &x,int &y)
{
	int temp=x;
	x=y;
	y=temp;
}

//output

/*
12
I am doing something
5 10
after swapping a and b are 10 5
area is:28.26
--------------------------------*/
