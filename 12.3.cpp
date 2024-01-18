//class templates with multiple parameters
//two generic data types in a class definition

#include<iostream>
using namespace std;

template<class T1,class T2>
class test
{
	T1 a;
	T2 b;
	public:
		test(T1 x,T2 y)
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
	test1.show();
	
	test<int,char>test2(100,'w');
	test2.show();
	
	return 0;
}

//output

/*

1.23 and 123
100 and w

--------------
*/
