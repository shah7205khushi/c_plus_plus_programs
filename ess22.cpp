//static data members

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class test
{
	int x,y;
	static int cnt;
	public:
		void getdata()
		{
			cout<<"enter val of x and y"<<endl;
			cin>>x >>y;
		}
		
		void showdata()
		{
			cout<<"x = "<<x<<endl;
			cout<<"y= "<<y<<endl;
		}
		
		test()
		{
			x=0;
			y=0;
			cnt++;
		}
		
		static int rtobj()
		{
			return(cnt);
		}
};

int test :: cnt=0;

int main()
{
	test t1,t2,t3;
	t1.getdata();
	t1.showdata();
	t2.getdata();
	t2.showdata();
	t3.getdata();
	t3.showdata(); 
	
	cout<<"total objects are =  "<<test ::rtobj()<<endl;
	return 0; 
}

//output

/*

enter val of x and y
1
3
x = 1
y= 3
enter val of x and y
5
7
x = 5
y= 7
enter val of x and y
9
5
x = 9
y= 5
total objects are =  3

---------------------------

*/
