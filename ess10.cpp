//example of class

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class student
{
	
	int rno;
	char name[35];
	
	public:
	void getdata()
	{
		cout<<"enter rollno and name"<<endl;
		cin>>rno>>name;
	}
	
	void showdata()
	{
		cout<<"Rollno= "<<rno<<endl;
		cout<<"Name = "<<name<<endl;
	 } 
};

int main()
{
	student s;
	s.getdata();
	s.showdata();
	return 0;
}

//output

/*

enter rollno and name
 1 kavya
Rollno= 1
Name = kavya

*/
