//use of bad_alloc exception  

#include<iostream>
#include<conio.h>
using namespace std;

class sample
{
	private:
		int data1;
		char data2;
		
	public:
		void set(int i,char c)
		{
			data1=i;
			data2=c;
		}
		
		void display(void)
		{
			cout<<"data1 = "<<data1<<endl;
			cout<<"data2 = "<<data2; 
		}
};

int main()
{
	sample *s_ptr;
	try
	{
		s_ptr = new sample;
	}
	
	catch(bad_alloc ba)
	{
		cout<<"Bad allocation occurred...the program will terminate now..";
		return 1;
	}
	
	s_ptr->set(25,'a');
	s_ptr->display();
	
	delete s_ptr;
	getch();
}

//output

/*
data1 = 25
data2 = a
*/
