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



class D:private B
{
	int c;
	public:
		void mul(void);
		void display(void);
};



void B :: set_ab(void)
{
//	cout<<"enter the value of a and b : ";
//	cin>>a>>b;

	a=6;
	b=3;
}

int B :: get_a()
{
	return a;
}


void D :: mul()
{
	set_ab();
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

	d1.mul();
	d1.display();
	return 0;
	
}


/*

a = 6
b = 3
c = 18


enter the value of a and b : 3
5
a = 3
b = 5
c = 15
enter the value of a and b : 6
3
a = 6
b = 3
c = 18

--------------------------------

*/

