//static data members

#include<iostream>
using namespace std;

class item
{
	static const int id=0;
	int price;
	int qty;
	
	public:
		void getdata(int p,int q)
		{
			price = p;
			qty = q;
		}
		
		void displaydata()
		{
			cout<<endl<<id<<" "<<price<<" "<<qty;
		}
};

int main()
{
	item i1,i2,i3;
	i1.getdata(10,15);
	i2.getdata(25,66);
	i3.getdata(45,78);
	
	i1.displaydata();
	i2.displaydata();
	i3.displaydata();
	return 0;
}

//output

/*
0 10 15
0 25 66
0 45 78
*/
