//bubblesorting using template

#include<iostream>
using namespace std;

template<typename T>

void bubblesort(T a[], int n)
{
	for(int i=0;i<n-1;i++)
	for(int j=n-1;i<j;j--)
	if(a[j]<a[j-1])
	swap(a[j],a[j-1]);
 } 
 
 //driver code
 
 int main()
 {
 	int a[5]={10,50,30,40,20};
 	char c[5]={'e','q','d','t','a'};
 	
 	int n = sizeof(a) / sizeof(a[0]);
 	
 	//calls template function
 	
 	bubblesort<int>(a,n);
 	bubblesort<char>(c,n);
 	
 	cout<<"sorted array :";
 	for(int i=0;i<n;i++)
 	cout<<a[i]<<" ";
 	cout<<endl;
 	
 	cout<<"sorted array :";
 	for(int i=0;i<n;i++)
 	cout<<c[i]<<" ";
 	cout<<endl;
 	
 	return 0;
 }
 
 /*
 
 sorted array :10 20 30 40 50
sorted array :a d e q t

--------------------------------

*/
