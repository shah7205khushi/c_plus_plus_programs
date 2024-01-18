//working with multiple files 
//creating files with open() function

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("country");
	
	fout<<"united states of america\n"<<endl;
	fout<<"united kingdom\n"<<endl;
	fout<<"south korea\n"<<endl;
	
	fout.close();
	
	fout.open("capital");
	
	fout<<"Washington\n"<<endl;
	fout<<"london\n"<<endl;
	fout<<"seoul\n"<<endl;
	
	fout.close();
	
	const int N = 80;
	char line[N];
	
	ifstream fin;
	fin.open("country");
	
	cout<<"contents of country file\n"<<endl;
	
	while(fin)
	{
		fin.getline(line,N);
		cout<<line<<endl;
	}
	
	fin.close();
	fin.open("capital");
	
	cout<<"contents of capital file\n"<<endl;
	
	while(fin)
	{
		fin.getline(line,N);
		cout<<line<<endl;
	}
	fin.close();
	
	return 0;
	
}

/*

contents of country file

united states of america

united kingdom

south korea


contents of capital file

Washington

london

seoul



------

*/
