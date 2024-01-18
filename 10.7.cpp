//padding with fill()

#include<iostream>
using namespace std;

int main()
{
	cout.fill('<');
	cout.precision(3);
	for(int n=1;n<=6;n++)
	{
		cout.width(5);
		cout<<n;
		cout.width(10);
		cout<<1.0/float(n)<<endl;
		if(n==3)
		  cout.fill('>');
	}
	
	cout<<"\npadding changed\n\n";
	cout.fill('#');
	cout.width(15);
	cout<<12.345678<<endl;
	
	return 0;
}

/*

<<<<1<<<<<<<<<1
<<<<2<<<<<<<0.5
<<<<3<<<<<0.333
>>>>4>>>>>>0.25
>>>>5>>>>>>>0.2
 >>>>6>>>>>0.167

padding changed

###########12.3

*/
