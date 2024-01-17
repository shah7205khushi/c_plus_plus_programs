//debugging exercises

//3.4

/*

#include<iostream.h>
#include<malloc.h>

char* allocatememory();
void main()
{
	char*str;
	str = allocatememory();
	cout << str;
	delete str;
	str = " ";
	cout<<str;
}

char * allocatememory()
{
	str = "memory allocation test";
	return str;
}


*/

#include<iostream>
#include<malloc.h>
using namespace std;

char* allocatememory();
int main()
{
	char*str;
	str = allocatememory();
	cout << str;
	delete str;
	str = " ";
	cout<<str;
	
	return 0;
}

char * allocatememory()
{
	char str[50];
	 char s1[50]="memory allocation test";
	return str;
}




