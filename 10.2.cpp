//reading strings with getline()

#include<iostream>
using namespace std;

int main()
{
	int size = 20;
	char city[20];
	
	cout<<"enter city name:"<<endl;
	cin>>city;
	
	cout<<"city : "<<city<<endl;
	
	cout<<"enter city name again :"<<endl;
	cin.getline(city,size);
	
	cout<<"city name now:"<<city<<endl;
	
	cout<<"enter another city name:"<<endl;
	cin.getline(city,5);
	
	cout<<"new city name :"<<city<<endl;
	
	return 0;
}

/*

enter city name:
ahmedabad
city : ahmedabad
enter city name again :
city name now:
enter another city name:
surat
new city name :surat


enter city name:
new delhi
city : new
enter city name again :
city name now: delhi
enter another city name:
pune
new city name :pune

*/
