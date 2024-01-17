//debugging exercises

//3.2

/*
#include<iostream.h>
void main()
{
int num[]={1,2,3,4,5,6};
num[1]==[1]num ? cout<<"success" : cout<<"error";
}
*/

#include<iostream>
using namespace std;
int main()
{
int num[]={1,2,3,4,5,6};
{

num[1]==1 ? num : cout<<"success"<<endl ; 
cout<<"error";

}
return 0;

}

//output

/*
success
error
---------

*/
