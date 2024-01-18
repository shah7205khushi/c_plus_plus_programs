//overloaded constructor

#include<iostream>
using namespace std;

class complex
{
	float x,y;
	public:
		complex(){
			
		}
		complex(float a)
		{
			x=y=a;
		}
		complex(float real , float imag)
		{
			x=real;
			y=imag;
		}
		
		friend complex sum(complex,complex);
		friend void show(complex);
};

complex sum(complex c1,complex c2)
{
	complex c3;
	c3.x= c1.x+ c2.x;
	c3.y=c1.y+c2.y;
	return (c3);
}

void show(complex c)
{
	cout<<c.x<<"+"<<c.y<<endl;
}

int main()
{
	complex a(2.7,3.5);
	complex b(1.6);
	complex c;
	
	c=sum(a,b);
	cout<<"a = ";
	show(a);
	
	cout<<"b = ";
	show(b);
	
	cout<<"c = ";
	show(c);
	
	
	complex p,q,r;
	p=complex(2.5,3.9);
	q=complex(1.6,2.5);
	r=sum(p,q);
	
	cout<<endl;
	cout<<"p = ";
	show(p);
	
	cout<<"q = ";
	show(q);
	
	cout<<"r = ";
	show(r);
	
	return 0;
	
}

/*

a = 2.7+3.5
b = 1.6+1.6
c = 4.3+5.1

p = 2.5+3.9
q = 1.6+2.5
r = 4.1+6.4

*/
