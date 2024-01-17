//operator overloading

#include<iostream>
using namespace std;

class point
{
	int x,y,z;
	public:
		point()
		{
			
		}
		point (int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		
		point operator +(point p2)
		{
			point p_r;
			cout<<"\nInside operator overloading :";
			cout<<"\nthe point is:("<<x<<","<<y<<","<<z<<")";
			cout<<"\nthe point is:("<<p2.x<<","<<p2.y<<","<<p2.z<<")";
			p_r.x=x+p2.x;
			p_r.y=y+p2.y;
			p_r.z=z+p2.z;
			return(p_r);
			
		}
		void display()
		{
			cout<<"\nthe point is:("<<x<<","<<y<<","<<z<<")";
		}
		
 };
 
 class complex
 {
 	int real,imaginary;
 	public:
 		void acceptnumber(int r,int i)
 		{
 			real=r;
 			imaginary=i;
 			cout<<"\nIn method:"<<real<<imaginary;
		}
		
		void display()
		{
			cout<<endl<<endl<<real<<"+"<<imaginary<<"i";
		}
		
		complex operator +( complex())
		{
			complex c1;
			c1.real=real+c1.real;
			c1.imaginary=imaginary+c1.imaginary;
			return (c1);
		}
		 
  };
  
  int main()
  {
  		int x=5,y=9,z;
		  z=x+y;
		  cout<<"\nAdding two integers:"<<z;
		  point p1(2,3,4),p2(1,2,3),p3;
		  p3=p1+p2;
		  p3.display();
		  
		  complex c1,c2,c3;
		  c1.acceptnumber(7,8);
		  c2.acceptnumber(9,3);
		  return 0; 
   }
   
   /* 
   
   Adding two integers:14
Inside operator overloading :
the point is:(2,3,4)
the point is:(1,2,3)
the point is:(3,5,7)
In method:78
In method:93

*/
