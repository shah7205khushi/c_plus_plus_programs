//operator overloading in string

#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
using namespace std;

class strin
{
	int ln;
	char name[35];
	public:
		void getdata();
		void showdata();
		
		strin operator + (strin p)
		{
			strin tmp;
			tmp.ln = ln + p.ln + 1;
			strcpy(tmp.name,name);
			strcat(tmp.name," ");
			strcat(tmp.name,p.name);
			return(tmp);
		}
		
		int operator > (strin t)
		{
			if(strcmp(name,t.name) > 0)
			return (1);
			else
			return (0);
		}
};

void strin :: getdata()
{
	cout<<"enter name "<<endl;
	cin>>name;
	ln = strlen(name);
}

void strin :: showdata()
{
	cout<<"ln = "<<ln<<endl;
	cout<<"name = "<<name<<endl;
}

int main()
{
	strin s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3 = s1+s2;
	s3.showdata();
	
	if(s1>s2)
	cout<<"s1 is higher"<<endl;
	else
	cout<<"s2 is higher"<<endl;
	return 0;
}

/*

enter name
jalpa
enter name
jil
ln = 9
name = jalpa jil
s2 is higher

*/
