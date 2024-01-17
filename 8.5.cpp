//multilevel and multiple inheritance

#include<iostream>
using namespace std;

class student
{
	protected:
		int roll_num;
	public:
		void get_num(int a)
		{
			roll_num = a;	
		}	
		
		void put_num(void)
		{
			cout<<"roll no : "<<roll_num<<endl;
		}
};

class test : public student
{
	protected:
		float part1,part2;
	public:
		void get_marks(float x , float y)
		{
			part1 = x;
			part2 = y;
		}
		
		void put_marks(void)
		{
			cout<<"marks obtained : "<<endl
				<<"part1 = "<<part1<<endl
				<<"part2 = "<<part2<<endl;
		}	
};

class sports
{
	protected:
		float score;
	public:
		void get_score(float s)
		{
			score = s;	
		}	
		
		void put_score(void)
		{
			cout<<"sports wt: "<<score<<endl;
		}
};

class result:public test,public sports
{
	float total;
	public:
		void display(void);
};

void result :: display(void)
{
	total = part1+part2+score;
	
	put_num();
	put_marks();
	put_score();
	cout<<"total score : "<<total<<endl;
}

int main()
{
	result r1;
	r1.get_num(1);
	r1.get_marks(12,64);
	r1.get_score(6);
	r1.display();
	return 0;
}


/*

roll no : 1
marks obtained :
part1 = 12
part2 = 64
sports wt: 6
total score : 82

*/
