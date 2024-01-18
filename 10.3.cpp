//displaying strings with write()

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char * string1 = "C++";
	char * string2 = "programming";
	int m = strlen(string1);
	int n = strlen(string2);
	
	
	for(int i=1;i<n;i++)
	{
		cout.write(string2,i);
		cout<<endl;
	}
	
	for(int i=n;i>0;i--)
	{
		cout.write(string2,i);
		cout<<endl;
	}
	
	cout.write(string1,m).write(string2,n);
	cout<<endl;
	
	cout.write(string1,10);
	return 0;
}

/*

p
pr
pro
prog
progr
progra
program
programm
programmi
programmin
programming
programmin
programmi
programm
program
progra
progr
prog
pro
pr
p
C++programming
C++progra

*/
