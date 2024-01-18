//constructor-destructor

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int cnt=0;
class test
{
	public:
		test()
		{
			cnt++;
			cout<<cnt<<"object created"<<endl;
			
		}
		
		~test()
		{
			cout<<cnt<<"object destroyed"<<endl;
			cnt--;
		}
};

int main()
{
	test t1,t2,t3;
	{
		test t4,t5;
	}
	
	return 0;	
}

//output

/*

1object created
2object created
3object created
4object created
5object created
5object destroyed
4object destroyed
3object destroyed
2object destroyed
1object destroyed

*/
