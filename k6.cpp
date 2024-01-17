//constructors

#include<iostream>
using namespace std;

class car
{
	string brand;
	int modelyear;
	
	public:
		void getdata()
		{
			cout<<"enter brand :";
			cin>>brand;
			
			cout<<"enter year :";
			cin>>modelyear;
		}
		
		void displaydata()
		{
			cout<<endl<<brand<<" "<<modelyear;
		}
		
		car(string,int);
		car (string x)
		{
			brand=x;
			modelyear=2000;
		}
		
		car()
		{
			brand="NULL";
			modelyear=0;
		}
		
		car(car & x)
		{
			brand=x.brand;
			modelyear=x.modelyear;
		}
};

car::car(string x,int y)
{
	brand=x;
	modelyear=y;
}

int main()
{
	car c1("honda",2012),c2("maruti",2020),c3("food"),c4(c1);
	car c5,c6;
	c5=c2;
	
	c1.displaydata();
	c2.displaydata();
	c3.displaydata();
	c4.displaydata();
	c5.displaydata();
	c6.displaydata();
}

//output

/*
honda 2012
maruti 2020
food 2000
honda 2012
maruti 2020
NULL 0

*/
