//operator overloading
//overloading of(+,-,*,/,%)

#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
using namespace std;

class test
{
	int x;
	int y;
	public:
		void getdata();
		void showdata();
		
		test operator + (test t)
		{
			test tmp;
			tmp.x=x+t.x;
			tmp.y=y+t.y;
			return(tmp);
		}
		
		test operator - (test t)
		{
			test tmp;
			tmp.x = x - t.x;
			tmp.y = y - t.y;
			return(tmp);
		}
		
		test operator * (test t)
		{
			test tmp;
			tmp.x = x * t.x;
			tmp.y = y * t.y;
			return(tmp);
		}
		
		test operator / (test t)
		{
			test tmp;
			tmp.x = x / t.x;
			tmp.y = y / t.y;
			return(tmp);
		}
		
		test operator % (test t)
		{
			test tmp;
			tmp.x = x % t.x;
			tmp.y = y % t.y;
			return(tmp);
		}
};

void test :: getdata()
{
	cout<<"enter value of x:";
	cin>>x;
	
	cout<<"enter value of y:";
	cin>>y;
}

void test :: showdata()
{
	cout<<"x :  "<<x<<endl;
	cout<<"y :  "<<y<<endl;
}

int main()
{
	test t1,t2,t3;
	
	t1.getdata();
	t2.getdata();
	
	t3 = t1 + t2;
	t3.showdata();
	
	t3 = t1 - t2;
	t3.showdata();
	
	t3 = t1 * t2;
	t3.showdata();
	
	t3 = t1 / t2;
	t3.showdata();
	
	t3 = t1 % t2;
	t3.showdata();
	
	return 0;
		
}

/*

enter value of x:10
enter value of y:5
enter value of x:2
enter value of y:4
x :  12
y :  9
x :  8
y :  1
x :  20
y :  20
x :  5
y :  1
x :  0
y :  1

*/
