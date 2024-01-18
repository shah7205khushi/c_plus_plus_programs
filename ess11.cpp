//use of loops

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
	student s[2];
	int i;
	
	for(i=0;i<=1;i++)
	s[i].getdata();
	
	for(i=0;i<=1;i++)
	s[i].showdata();
	return 0;
}

//output

/*

enter rollno and name
1
khushi
enter rollno and name
2
jil
Rollno= 1
Name = khushi
Rollno= 2
Name = jil

*/
