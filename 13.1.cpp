//try block throwing an exception
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"enter values of a and b";
	cin>>a>>b;
	
	int x = a-b;
	
	try
	{
		if(x != 0)
		{
			cout<<"result(a/x) = "<<a/x<<endl;
		}
		else
		{
			throw(x);
		}
	}
	
	catch(int i)
	{
		cout<<"exception caught: divide by zero"<<endl;
	}
	
	cout<<"end";
	return 0;
}

/*


enter values of a and b
7
7
exception caught: divide by zero
end
-------

enter values of a and b
8
4
result(a/x) = 2
end

*/

