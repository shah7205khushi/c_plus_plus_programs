//scope resolution operator

#include<iostream>
using namespace std;

int m=10;
int main()
{
	int m=20;
	{
		int k=m;
		int m=30;
		
		cout<<"in inner block"<<endl;
		cout<<"using scope resolution"<< :: m<<"\n";
	}
	
	cout<<"\ninside outer block"<<"  "<<"m : "<<m <<" ::m= "<<::m<<endl;
	{
		int x=5;
		float y=2.3;
		cout <<"sum is :"<<float(x/y);
	 } 
		return(1);
 } 
 
 
 //output
 
 /*
 in inner block
using scope resolution10

inside outer block  m : 20 ::m= 10
sum is :2.17391
--------------------------------*/
