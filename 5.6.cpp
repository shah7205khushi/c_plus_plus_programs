// Array of objects

#include<iostream>
using namespace std;

class employee
{
	char name[30];
	float age;
	public:
		void getdata(void);
		void putdata(void);
};

void employee :: getdata(void)
{
	cout<<"enter name :";
	cin>>name;
	
	cout<<"enter age :";
	cin>>age;
}

void employee :: putdata(void)
{
	cout<<"Name :"<<name<<endl;
	cout<<"Age:"<<age<<endl;
}

const int size = 3;
int main()
{
	employee manager[size];
	for (int i=0;i<size;i++)
	{
		cout<<"details of manager"<<i+1<<endl;
		manager[i].getdata();
	}
	
	cout<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<"\nmanager "<<i+1<<"\n";
		manager[i].putdata();
	}
	return 0;
}

/*

details of manager1
enter name :khushi
enter age :23
details of manager2
enter name :jil
enter age :78
details of manager3
enter name :kavya
enter age :43


manager 1
Name :khushi
Age:23

manager 2
Name :jil
Age:78

manager 3
Name :kavya
Age:43

*/
