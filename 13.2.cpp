//invoking function that generates exception

#include<iostream>
using namespace std;

void divide(int x,int y,int z)
{
	cout<<"we are inside the function :"<<endl;
	if((x-y) != 0)
	{
		int r = z/(x-y);
		cout<<"result = "<<r<<endl;
	}
	else
	{
		throw(x-y);
	}
}

int main()
{
	try
	{
		cout<<"we are inside the try block"<<endl;
		divide(10,20,30);
		divide(10,10,20);
	}
	
	catch(int i)
	{
		cout<<"caught the exception";
	}
	return 0;
}

//output

/*

we are inside the try block
we are inside the function :
result = -3
we are inside the function :
caught the exception

*/
