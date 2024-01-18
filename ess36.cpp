#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class base
{
	protected:
		int x;
	public:
		
		void getdata()
		{
			cout<<"enter the value of x"<<endl;
			cin>>x;
		}
		
		void showdata()
		{
			cout<<"x = "<<x<<endl;
		}			
};

class derived : public base
{
	int y;
	public:
		
		void getdata()
		{
			cout<<"enter the value of x and y"<<endl;
			cin>>x>>y;
		}
		
		void showdata()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y = "<<y<<endl;
			
		}			
};

int main()
{
	derived d1;
	d1.getdata();
	d1.showdata();
	return 0;
}

		
/*

enter the value of x and y
4
6
x = 4
y = 6

*/
