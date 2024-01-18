//use of new and delete operator

#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

int main()
{
	int num,*ptr,i;
	cout<<"enter no"<<endl;
	cin>>num;
	ptr=new int[num];
	for(i=0;i<num;i++)
	{
		cout<<"enter no"<<endl;
		cin>>*(ptr+i);
	}
	
	for(i=0;i<num;i++)
	cout<<setw(4)<<ptr[i];
	cout<<endl;
	delete(ptr);
	return(0);
}

//output

/*

enter no
6
enter no
1
enter no
2
enter no
3
enter no
4
enter no
5
enter no
6
   1   2   3   4   5   6

*/
