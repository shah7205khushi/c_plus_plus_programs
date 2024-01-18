//scope-resolution 

#include<iostream>
#include<iomanip>
using namespace std;

int x=999;
int main()
{
	int x=99;
	cout<<"x= "<<x<<endl;
	cout<<"x= "<<::x<<endl;
}


/*

x= 99
x= 999

*/
