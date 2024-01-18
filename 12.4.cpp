//using default data types in a class definition
#include<iostream>
using namespace std;

template<class t1=int,class t2=int>

class test
{
	t1 a;
	t2 b;
	public:
	
	test(t1 x,t2 y)
	{
		a=x;
		b=y;
	}
	
	void show()
	{
		cout<<a<<" and "<<b<<endl;
	}
};

int main()
{
	test<float,int>test1(1.23,123);
	test<int,char>test2(100,'w');
	test<>test3('a',12.35);
	test<>test4(56,87);
	test1.show();
	test2.show();
	test3.show();
	test4.show();
	
	return 0;
}

//output

/*

1.23 and 123
100 and w
97 and 12
56 and 87

*/

