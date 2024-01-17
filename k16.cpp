//function template

#include<iostream>
using namespace std;

template<typename T>

T maximum(T x,T y)
{
	return (x>y ? x:y);
}

int main()
{
	cout<<maximum<int>(3,5)<<endl;
	cout<<maximum<char>('r','e')<<endl;
	return 0;
}

