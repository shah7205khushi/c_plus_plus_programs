//finding max

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class test
{
	int x,y;
	int max()
	{
		if(x>y)
		return(x);
		else
		return(y);
	}
	
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
			cout <<" max= "<<max()<<endl;
		}
};

int main()
{
	test t;
	t.getdata();
	t.showdata();
	return 0;
}

//output

/*

enter int x,y
12
56
 x= 12
 y= 56
 max= 56
 
 */
