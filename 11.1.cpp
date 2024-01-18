//working with multiple files

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream outf("item");
	
	cout<<"enter item name :";
	char name[30];
	cin>>name;
	
	outf<<name<<endl;
	
	cout<<"enter item cost :";
	float cost;
	cin>>cost;
	
	outf<<cost<<endl;
	outf.close();
	
	ifstream inf("item");
	inf>>name;
	inf>>cost;
	cout<<endl;
	
	cout<<"item name :"<<name<<endl;
	cout<<"item cost :"<<cost<<endl;
	
	inf.close();
	return 0;
}

//output

/*

enter item name :pen
enter item cost :5

item name :pen
item cost :5

*/
