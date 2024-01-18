//object to basic

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class time
{
	int h,min,s;
	public:
		void getdata()
		{
			cout<<"enter hour,min and secconds"<<endl;
			cin>>h>>min>>s;
		}
		
		void showdata()
		{
			cout<<"time is "<<setw(2)<<h<<" : "<<setw(2)<<min<<" : "<<setw(2)<<s<<endl;
		}
		
		time()
		{
			
		}
		
		time(int w)
		{
			s=w%60;
			min=w/60;
			if(min>=60)
			{
				h=min/60;
				min = min%60;
			}
			
			else
			h=0;
		}
};

int main()
{
	int tseconds;
	time t1;
	cout<<"enter total seconds"<<endl;
	cin>>tseconds;
	
	t1=tseconds;
	t1.showdata();
	return 0;
}

/*

enter total seconds
3600
time is  1 :  0 :  0

*/
