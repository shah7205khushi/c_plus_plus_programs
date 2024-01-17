//friend function

#include<cstring>
#include<ctime>
#include<iostream>
using namespace std;

class employee;
class customer
{
	int id;
	string name;
	int salary;
	public:
		void getdata()
		{
			cout<<"\nEnter id:";
			cin>>id;
			cout<<"\nEnter Name:";
			cin>>name;
			cout<<"\nEnter salary:";
			cin>>salary;
		}
		
		void display()
		{
			//cout"\n"<<name<<" "<<calculatetax(salary);
		}
		
		int getsalary()
		{
			return salary;
		}
		
		friend int calculatemax(employee,customer);
};

class employee
{
	int id;
	string name;
	int pfnumber;
	int salary;
	int d1,d2,d3;
	public:
		
		void getsalary(int h,int d,int t,int d1,int d2,int d3)
		{
			salary=h+d+t-d1-d2-d3;
			cout<<salary<<endl;
		}
		friend int calculatemax(employee,customer);
};

int calculatemax(employee e,customer c)
{
	int se=e.salary;
	int sc=c.salary;
	if(se > sc)
		return se;
	else
		return sc;	
}

int main()
{
	customer c1;
	c1.getdata();
	c1.display();
	employee e1;
	e1.getsalary(1000,100,200,45,55,100);
	cout<<endl<<calculatemax(e1,c1);
	return 0;
}

//output

/*

Enter id:1

Enter Name:khushi

Enter salary:5600
1100

5600

Enter id:2

Enter Name:jil

Enter salary:500
1100

1100

*/
