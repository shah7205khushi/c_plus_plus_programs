//overloading with friend function

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
		
		friend test operator * (test,int);
		friend test operator * (int,test);
				
			
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

test operator * (int p,test q)
{
	test tmp;
	tmp.x = q.x*p;
	tmp.y = q.y*p;
	return(tmp);
}

test operator * (test q,int p)
{
	test tmp;
	tmp.x = q.x*p;
	tmp.y = q.y*p;
	return(tmp);
}

int main()
{
	test t1,t2;
	t1.getdata();
	t2=t1*5;
	t2.showdata();
	t1=5*t2;
	t1.showdata();
	return 0;
}

/*
enter the value of X:5
enter the value of y:4
x: 25
y: 20
x: 125
y: 100


*/
