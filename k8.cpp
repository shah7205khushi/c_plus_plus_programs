//static data member

#include<iostream>
using namespace std;

class employee
{
	static int id;
	int salary;
	
	public: 
		void getdata(int a)
		{
			salary = a;
			id++;
		}
		
		void displaydata(void)
		{
			cout<<id<<" "<<salary<<endl;
		}
};

int employee :: id;
int main()
{
	employee e1,e2,e3;
	e1.getdata(1000);
	e1.displaydata();
	e2.getdata(2000);
	e2.displaydata();
	e3.getdata(3000);
	e3.displaydata();
	e1.displaydata();
	e2.displaydata();
	return 0;
}

//output

/*
1 1000
2 2000
3 3000
3 1000
3 2000

*/
