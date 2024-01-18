//Array of objects

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
		
		
};

int main()
{
	test t[2];
	int i;
	
	for(i=0;i<=1;i++)
	t[i].getdata();
	
	for(i=0;i<=1;i++)
	t[i].showdata();
	
	return 0;
}

//output

/*

enter int x,y
76
89
enter int x,y
34
87
 x= 76
 y= 89
 x= 34
 y= 87
 
 */ 
