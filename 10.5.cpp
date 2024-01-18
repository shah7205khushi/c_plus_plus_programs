//precision setting with precision()

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout<<"precision set to 3 digits \n";
	cout.precision(3);
	
	cout.width(10);
	cout<<"value";
	cout.width(15);
	cout<<"sqrt_of_value"<<"\n";
	
	for(int n=1;n<=5;n++)
	{
		cout.width(8);
		cout<<n;
		cout.width(13);
		cout<<sqrt(n)<<"\n";
	}
	
	cout<<"\n precision set to 5 digits \n";
	cout.precision(5);
	cout<<"sqrt(10) = "<<sqrt(10)<<endl;
	
	cout.precision(0);
	cout<<"sqrt(10) = "<<sqrt(10)<<endl;
	
	return 0;
}

/*

precision set to 3 digits
     value  sqrt_of_value
       1            1
       2         1.41
       3         1.73
       4            2
       5         2.24

 precision set to 5 digits
sqrt(10) = 3.1623
sqrt(10) = 3

*/
