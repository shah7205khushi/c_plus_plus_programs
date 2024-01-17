//object return

#include<iostream>
using namespace std;

class point
{
	int x,y;
	public:
		void getdata(int a,int b)
		{
			x=a;
			y=b;
		}
		
		void display()
		{
			cout<<"\npoint is("<<x<<","<<y<<")";
		}
		
		point add(point p2)
		{
			point p_r;
			p_r.x=x+p2.x;
			p_r.y=y+p2.y;
			return (p_r);
		}
};

int main()
{
	point p1,p2,p3;
	p1.getdata(2,3);
	p2.getdata(3,4);
	p3=p1.add(p2);
	p3.display();
	return 0;
}

//output

//point is(5,7)
