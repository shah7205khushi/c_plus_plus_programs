#include<iostream>
using namespace std;

int main()
{
	int a[20];
	try
	{
		for(int i;i<=25;i++)
		{
			if(i>=20)
			 throw(i);
			 
			 else
			 {
			 	a[i]=i;
			 	cout<<a[i]<<endl;
			 }
			 
			 
		}
	}
}
