//object as argument

#include<iostream>
using namespace std;

class time
{
	int hours,minutes;
	public:
		
		void accepttime(int h,int m)
		{
			hours=h;
			minutes=m;
		}
		
		void accepttime()
		{
			cout<<"enter hours:";
			cin>>hours;
			
			cout<<"enter minutes:";
			cin>>minutes;
		}
		
		void displaytime()
		{
			cout<<endl<<hours<<" "<<minutes;
		}
		
		void sum(time t1,time t2)
		{
			t1.accepttime();
			t2.accepttime();
			
			minutes=t1.minutes+t2.minutes;
			hours=minutes/60;
			minutes=minutes%60;
			hours=hours+t1.hours+t2.hours;
		
		}
};

int main()
{
	time t1,t2,t3;
//	t1.accepttime(2,45);
//	t2.accepttime(3,30);
	t3.sum(t1,t2);
	t3.displaytime();
	return 0;
}

//output

/*
enter hours:5
enter minutes:46
enter hours:4
enter minutes:57

10 43

*/
