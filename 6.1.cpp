//example of parameterized constructor

#include<iostream>
using namespace std;

class point
{
	int x,y;
	public:
		point(int a , int b)
		{
			x=a;
			y=b;
		}
		
		void display()
		{
			cout<<"("<<x<<","<<y<<")\n";
		}
};

int main()
{
	point p1(1,1);
	point p2(5,10);
	cout<<"point p1 = ";
	p1.display();
	cout<<"point p2 = ";
	p2.display();
	return 0;

}

//point p1 = (1,1)
//point p2 = (5,10)
