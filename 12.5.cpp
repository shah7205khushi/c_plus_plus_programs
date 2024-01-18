#include<iostream>
using namespace std;

template<class T>
void swapp(T &x,T &y)
{
	T temp = x;
	x = y;
	y = temp;
}

void fun(int m,int n,float a,float b)
{
	cout<<"before swap :"<<m<<" "<<n<<endl;
	swapp(m,n);
	cout<<"after swap :"<<m<<" "<<n<<endl;
	
	cout<<"before swap :"<<a<<" "<<b<<endl;
	swapp(a,b);
	cout<<"after swap :"<<a<<" "<<b<<endl;

}

int main()
{
	fun(100,200,11.22,33.44);
	
	return 0;
}

/*

before swap :100 200
after swap :200 100
before swap :11.22 33.44
after swap :33.44 11.22

*/
