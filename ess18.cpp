//constructor

#include<iomanip>
#include<conio.h>
#include<iostream>
using namespace std;

class test
{
	int x,y;
	public:
		test()
		{
			x=300;
			y=999;
		}
		
		test(int p)
		{
			x=p;
		}
		
		test (int p,int q)
		{
			x=p;
			y=q;
		}
		
		test (test & t)
		{
			x=t.x;
			y=t.y;
		}
		
		void showdata()
		{
			cout<<"x= "<<x<<endl;
			cout<<"y= "<<y<<endl;
		}
};

int main()
{
	test t1;
	t1.showdata();
	test t2(88);
	t2.showdata();
	test t3(22,88);
	t3.showdata();
	test t4(t2);
	t4.showdata();
	return 0;
	
}

//output

/*

x= 300
y= 999
x= 88
y= 0
x= 22
y= 88
x= 88
y= 0

----------

*/
