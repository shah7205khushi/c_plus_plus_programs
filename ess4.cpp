//find the factorial of number

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

long int fact(int p)
{
	long int ans=1;
	int i;
	for(i=p;i>=1;i--)
	ans=ans*i;
	return(ans);
}


int main()
{
	int num;
	long int fact(int);
	cout <<" enter value " <<endl;
	cin>>num;
	cout<<"fact= "<<fact(num)<<endl;
	return 0;
}

//output

/*
enter value
7
fact= 5040

*/

