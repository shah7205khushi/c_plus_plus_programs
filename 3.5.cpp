//Explicit Type Casting

#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int intvar=25;
	float floatvar=35.87;
	
	cout<<"intvar = "<<intvar;
	cout<<"\nfloatvar = "<<floatvar;
	cout<<"\nfloat(intvar) =  "<<float(intvar);
	cout<<"\nint(floatvar) = "<<int(floatvar);
	
	getch();
}

//output

/*
intvar = 25
floatvar = 35.87
float(intvar) =  25
int(floatvar) = 35
*/
