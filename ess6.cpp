//default argument

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int max(int p=123,int q=55,int r=99);
	int a,b,c;
	
	cout<<"enter three int nos"<<endl;
	cin>>a>>b>>c;
	
	cout<<"max = "<<max(a,b,c)<<endl;
	cout<<"max = "<<max(a,b)<<endl;
	cout<<"max = "<<max(a)<<endl;
	cout<<"max = "<<max()<<endl;
}

int max(int a,int b,int c)
{
	int ans;
	if(a>b)
	{
		if(a>c)
		ans=a;
		else
		ans=c;
	}
	
	else
	{
		if(b>c)
		ans=b;
		else
		ans=c;
	}
	return(ans);
}

//output

/*

enter three int nos
768
324
987
max = 987
max = 768
max = 768
max = 123

*/
