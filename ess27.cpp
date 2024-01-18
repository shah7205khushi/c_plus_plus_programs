//overloading of decrement operator

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
			
			test operator -- ()
		 {
			test tmp;
			tmp.x= --x;
			tmp.y= --y;
			return(tmp);
		 }
		    
		    test operator -- (int)
		 {
			test tmp;
			tmp.x= x--;
			tmp.y= y--;
			return(tmp);
		 }
};

void test :: getdata()
{
	cout<<"enter the value of X:";
	cin>>x;
	
	cout<<"enter the value of Y:";
	cin>>y;
}

void test ::showdata()
{
	cout<<"X= "<<x<<endl;
	cout<<"Y= "<<y<<endl;
	
}

int main()
{
	test t1,t2;
	
	t1.getdata();
	
	t2 = --t1;
	t1.showdata();
	t2.showdata();
	
	t2 = t1--;
	t1.showdata();
	t2.showdata();
	
}

/*

enter the value of X:8
enter the value of Y:4
X= 7
Y= 3
X= 7
Y= 3
X= 6
Y= 2
X= 7
Y= 3

*/
