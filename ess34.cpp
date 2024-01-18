//basic to object

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
		
		operator int()
		{
			int ts;
			ts=h*3600 + min*60 + s;
			return(ts);
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


	t1.getdata();
	tseconds = t1;
	
	cout<<"total seconds are = "<<tseconds<<endl;
	cout<<"enter total seconds "<<endl;
	cin>>tseconds;
	
	t1.showdata();
	return 0;
}

/*

enter hour,min and secconds
12
45
56
total seconds are = 45956
enter total seconds
45956
time is 12 : 45 : 56

--------------------------------

*/
