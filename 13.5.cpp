//rethrowing an exception

#include<iostream>
using namespace std;

void divide(double x,double y)
{
	cout<<"inside function"<<endl;
	try
	{
		if(y == 0.0)
		  throw y;
		else
		  cout<<"division = "<<x/y<<endl;  
	}
	
	catch(double i)
	{
		cout<<"caught double inside function"<<endl;
		throw;
		
	}
	cout<<"end of function"<<endl;;
}

int main()
{
	cout<<"inside main"<<endl;
	
	try
	{
		divide(10.5,2.0);
		divide(20.0,0.0);
		
	}
	
	catch(double i)
	{
		cout<<"caught double inside main"<<endl;
	}
	cout<<"end of main"<<endl;
	return 0;
}

//output

/*

inside main
inside function
division = 5.25
end of function
inside function
caught double inside function
caught double inside main
end of main

*/
