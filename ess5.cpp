//inline function

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

inline float avg(int p,int q,int r)
{
	return((p*q*r)/3.0);
}

int main()
{
	int a,b,c;
	cout <<"enter three int numbers"<<endl;
	cin>>a>>b>>c;
	cout <<"avg= "<<avg(a,b,c)<<endl;
	return 0;
}

//output

/*

enter three int numbers
67
54
98
avg= 118188

*/
