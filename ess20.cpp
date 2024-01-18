//simple class program
//use of scope resolution

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class test
{
	int x,y;
	public:
		void getdata();
		void showdata();
};

void test :: getdata()
{
	cout<<"enter the value of x and y"<<endl;
	cin>>x>>y;
}

void test :: showdata()
{
	cout<<"x=  "<<x<<endl;
	cout<<"y=  "<<y<<endl;
}

int main()
{
	test t1;
	t1.getdata();
	t1.showdata();
	return 0;
}

//output

/*

enter the value of x and y
2
7
x=  2
y=  7

*/
