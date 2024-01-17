#include<iostream>
using namespace std;

class sample
{
	int m;
	void read(int x)
	{
		cout<<endl<<"inside read";
		m=x;
	}
	
	public:
		void update()
		{
			int x;
			cout<<"enter number :";
			cin>>x;
			read(x);
			m=m*10;
		}
		
		int display()
		{
			return m;
		}
};

int main()
{
	sample s1;
	s1.update();
	cout<<endl<<"updated number is :"<<s1.display();
	return (0);
}

//output

/*
enter number :2

inside read
updated number is :20

*/
