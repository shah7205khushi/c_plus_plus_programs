//testing throw restrictions

#include<iostream>
using namespace std;

void test(int x) throw(int,double)
{
	if(x==0)
	 throw 'x';
	else 
	if(x == 1)
	 throw x;
	else 
	if(x == -1)
	  throw 1.0;
	cout<<"end of function block "<<endl;    
}

int main()
{
	try
	{
		cout<<"testing throw restriction"<<endl;
		cout<<"x == 0 \n";
		test(0);
		cout<<"x == 1 \n";
		test(1);
		cout<<"x == -1 \n";
		test(-1);
		cout<<"x == 2 \n";
		test(2);
	}
	
	catch(char c)
	{
		cout<<"caught a character"<<endl;
	}
	catch(int m )
	{
		cout<<"caught an integer"<<endl;
	}
	catch(double d)
	{
		cout<<"caught a double"<<endl;
	}
	
	cout<<"end of try-catch system"<<endl;
	return 0;
}
