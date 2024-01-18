//sum of 2 numbers

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class test
{
	int x,y;
	
	public:
		
		void getdata()
		{
			cout<<"enter int x,y"<<endl;
			cin>>x>>y;
		}
		
		void showdata()
		{
			cout <<" x= "<<x<<endl;
			cout <<" y= "<<y<<endl;
		}
		
		test sum(test p)
		{
			test tmp;
			tmp.x=x+p.x;
			tmp.y=y+p.y;
			return(tmp);
		}
};

int main()
{
	test t1,t2,t3;
	t1.getdata();
	t2.getdata();
	t3=t1.sum(t2);
	t3.showdata();
	return 0;
}

//output

/*

enter int x,y
12
8
enter int x,y
78
2
 x= 90
 y= 10
 
 */
