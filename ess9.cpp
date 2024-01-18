//example of class

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class student
{
	public:
	int rno;
	char name[35];
	
	
	void getdata()
	{
//		cout<<"enter rollno and name"<<endl;
//		cin>>rno>>name;
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
	s.rno=15;
	strcpy(s.name,"khushi");
	s.getdata();
	s.showdata();
	return 0;
}

//output

/*

enter rollno and name
1 jil
Rollno= 1
Name = jil

Rollno= 15
Name = khushi


*/
