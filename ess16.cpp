//friend function

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class test1;
class test
{
	int x,y;
	public:
		void getdata()
		{
			cout<<"Enter int val of x and y:"<<endl;
			cin>>x>>y;
		}
		
		void showdata()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y= "<<y<<endl;
		}
		
		friend float sum(test,test1);
};

class test1
{
	float a,b;
	public:
		void getdata()
		{
			cout<<"Enter float val of a and b:"<<endl;
			cin>>a>>b;
		}
		
		void showdata()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b= "<<b<<endl;
		}
		
		friend float sum(test,test1);
		
};

float sum(test p,test1 q)
{
	return(p.x + p.y + q.a + q.b);
}

int main()
{
	test p;
	test1 q;
	p.getdata();
	q.getdata();
	cout<<"sum= "<<sum(p,q)<<endl;
	return 0;
}

//output

/*

Enter int val of x and y:
78
32
Enter float val of a and b:
67.33
98.45
sum= 275.78

*/
