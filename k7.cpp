//static data member

#include<iostream>
using namespace std;

class employee
{
	static int id;
	int age;
	
	public:
		
		void getdata(int a)
		{
			age=a;
		}
		
		void displaydata(void)
		{
			cout<<id<<" "<<age<<endl;
		}
};

int employee :: id=2;

int main()
{
	employee e1,e2;
	e1.getdata(23);
	e1.displaydata();
	e2.getdata(24);
	e2.displaydata();
	return 0;
}

//output

/*
2 23
2 24
*/
