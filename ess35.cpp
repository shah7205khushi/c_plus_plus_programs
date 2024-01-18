//operator overloading 

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class test
{
	int x,y;
	public:
		void avalx(float p)
		{
			x = int(p);
		}
		
		void avaly(float q)
		{
			y = int(q);
		}
		
		void getdata()
		{
			cout<<"enter val of int x,y"<<endl;
			cin>>x>>y;
		}
		
		void showdata()
		{
			cout<<"x =  "<<x<<endl;
			cout<<"y =  "<<y<<endl;
		}
		
		int rvalx()
		{
			return(x);
		}
		
		int rvaly()
		{
			return(y);
		}
};

class test1
{
	float a,b;
	public:
		void getdata()
		{
			cout<<"enter val of int a,b"<<endl;
			cin>>a>>b;	
		}
		
		void showdata()
		{
			cout<<"a =  "<<a<<endl;
			cout<<"b =  "<<b<<endl;
		}
		
		test1()
		{
			
		}
		
		test1(test p)
		{
			a=float(p.rvalx());
			b=float(p.rvaly());
		}
		
		operator test()
		{
			test tmp;
			tmp.avalx(a);
			tmp.avaly(b);
			return(tmp);
		}
};

int main()
{
	test p;
	test1 q;
	p.getdata();
	q=p;
	q.showdata();
	//return 0;
	q.getdata();
	p=q;
	p.showdata();
	return 0;
}

/*

enter val of int x,y
8
4
a =  8
b =  4
enter val of int a,b
2
7
x =  2
y =  7

*/
