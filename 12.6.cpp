//bubble sort using template functions
#include<iostream>
using namespace std;

template<class X>
void swapp(X &a,X &b)
{
	X temp=a;
	a=b;
	b=temp;
}


template<class T>
void bubble(T a[],int n)
{
	for(int i=0;i<n-1;i++)
	for(int j=n-1;i<j;j--)
	  if(a[j]<a[j-1])
	  {
	  	swapp(a[j],a[j-1]);
	  }
}



int main()
{
	int x[5] = {10,60,40,20,70};
	float y[5] = {1.1,6.4,7.4,3.7,2.2};
	
	bubble(x,5);
	bubble(y,5);
	
	cout<<"sorted X-array:";
	for(int i=0;i<5;i++)
	cout<<x[i]<<" ";
	cout<<endl;
	
	cout<<"sorted Y-array:";
	for(int i=0;i<5;i++)
	cout<<y[i]<<" ";
	cout<<endl;
	
	return 0;
}

//output

/*

sorted X-array:10 20 40 60 70
sorted Y-array:1.1 2.2 3.7 6.4 7.4

*/
