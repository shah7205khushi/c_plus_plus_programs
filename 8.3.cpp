//Multilevel Inheritance

#include<iostream>
using namespace std;

class student
{
	protected:
		int roll_num;
	public:
		void get_num(int);
		void put_num(void);	
};




void student :: get_num(int a)
{
	roll_num=a;
}

void student :: put_num()
{
	cout<<"roll no : "<<roll_num<<endl;
}




class test : public student
{
	protected:
		float sub1;
		float sub2;
	public:
		void get_marks(float,float);
		void put_marks(void);	
};



void test :: get_marks(float x,float y)
{
	sub1 = x;
	sub2 = y;
}

void test :: put_marks()
{
	cout<<"Marks in Sub1 = "<<sub1<<endl;
	cout<<"Marks in Sub2 = "<<sub2<<endl;
}




class result:public test
{
	float total;
	public:
		void display(void);
};




void result :: display(void)
{
	total = sub1 + sub2;
	put_num();
	put_marks();
	cout<<"total = "<<total<<endl;
	
}



int main()
{
	result r1;
	r1.get_num(1);
	r1.get_marks(89.56,76.32);
	r1.display();
	return 0;
}

/*

roll no : 1
Marks in Sub1 = 89.56
Marks in Sub2 = 76.32
total = 165.88

*/
