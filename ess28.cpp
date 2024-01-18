//overloading of (-) operator

#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;

class test
{
	int x;
	int y;
		public:
			void getdata();
			void showdata();
			
			void operator -()
			{
				x= -x;
				y= -y;
			}
};

void test :: getdata()
{
	cout<<"enter the value of X:";
	cin>>x;
	
	cout<<"enter the value of y:";
	cin>>y;
}

void test :: showdata()
{
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;
}

int main()
{
	test t1;
	t1.getdata();
	t1.showdata();
	-t1;
	t1.showdata();
	return 0;
}

/*

enter the value of X:34
enter the value of y:87
x: 34
y: 87
x: -34
y: -87

*/
