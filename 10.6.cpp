//width and precision manipulators
#include<iostream>
using namespace std;

int main()
{
	float pi=22.0/7.0;
	int i;
	cout<<"value of pi:\n";
	for(i=1;i<=10;i++)
	{
		cout.width(i+1);
		cout.precision(i);
		cout<<pi<<endl;
	}
	return 0;
}

/*

value of pi:
 3
3.1
3.14
3.143
3.1429
3.14286
3.142857
3.1428571
3.14285707
3.142857075

*/
