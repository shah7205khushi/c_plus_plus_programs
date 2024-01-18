//character I/O with get() and put()

#include<iostream>
using namespace std;

int main()
{
	int count = 0;
	char c;
	
	cout<<"input text\n";
	cin.get(c);
	
	while(c != '\n')
	{
		cout.put(c);
		count++;
		cin.get(c);
		
	}
	
	cout<<endl<<"number of character = "<<count<<endl;
	return 0;
}

/*

input text
khushi shah
khushi shah
number of character = 11

*/

