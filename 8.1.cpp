//single inheritance

#include<iostream>
using namespace std;

class B
{
	int a;
	public:
		int b;
		void set_ab();
		int get_a(void);
		void show_a(void);
};



class D:public B
{
	int c;
	public:
		void mul(void);
		void display(void);
};



void B :: set_ab(void)
{
	a=5;
	b=10;
}

int B :: get_a()
{
	return a;
}

void B :: show_a()
{
	cout<<"a= "<<a<<endl;
}

void D :: mul()
{
	c=b*get_a();
}

void D :: display()
{
	cout<<"a = "<<get_a()<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
}

int main()
{
	D d1;
	d1.set_ab();
	d1.mul();
	d1.show_a();
	d1.display();
	
	d1.b=20;
	d1.mul();
	d1.display();
	
	return 0;
	
}


/*

a= 5
a = 5
b = 10
c = 50
a = 5
b = 20
c = 100

*/
