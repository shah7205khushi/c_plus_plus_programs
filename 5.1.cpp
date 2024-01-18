#include<iostream>
using namespace std;

class item
{
	int number;
	float cost;
	public:
		void getdata(int a,float b);
		void putdata()
		{
			cout<<"number : "<<number<<"\n";
			cout<<"cost : "<<cost<<"\n";
		}
};

void item :: getdata(int a,float b)
{
	number = a;
	cost = b;
}

int main()
{
	item x;
	cout<<"\nobject x"<<endl;
	
	x.getdata(100,299.95);
	x.putdata();
	
	item y;
	
	cout<<"\nobject y"<<endl;
	
	y.getdata(200,175.50);
	y.putdata();
	
	return 0;
}

/*

object x
number : 100
cost : 299.95

object y
number : 200
cost : 175.5

*/
