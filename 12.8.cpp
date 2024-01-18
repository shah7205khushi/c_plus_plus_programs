//function with two generic types
#include<iostream>
#include<string.h>
using namespace std;

template<class t1,class t2>
void display(t1 x,t2 y)
{
	cout<<x<<" "<<y<<endl;
}

int main()
{
	display(1999,"EBG");
	display(12.34,123);
	
	return 0;
}

/*

output

1999 EBG
12.34 123

*/
