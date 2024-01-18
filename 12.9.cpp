//template function with explicit function
#include<iostream>
#include<string.h>
using namespace std;

template<class T>
void display(T x)
{
	cout<<"overloaded template display 1:"<<x<<endl;
}

template<class T,class T1>
void display(T x,T1 y)
{
	cout<<"overloaded template display 2:"<<x<<" , "<<y<<endl;
}

void display(int x)
{
	cout<<"explicit display"<<x<<endl;
}

int main()
{
	display(100);
	display(23.45);
	display(100,43.32);
	display('f');
	
	return 0;
}

//output

/*

explicit display100
overloaded template display 1:23.45
overloaded template display 2:100 , 43.32
overloaded template display 1:f

*/
