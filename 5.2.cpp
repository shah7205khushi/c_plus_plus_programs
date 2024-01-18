//nesting of member function

#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
using namespace std;

class binary
{
	string s;
	public:
		void read(void)
		{
			cout<<"enter a binary number:";
			cin>>s;
		}
		
		void check_binary(void)
		{
			for(int i=0;i<s.length();i++)
			{
				if(s.at(i)!='0' && s.at(i)!='1')
				{
					cout<<"\nIncorrect binary number format..the program will quit";
					getch();
					exit(0);
				}
			}
		}
		
		void ones(void)
		{
			check_binary();
			for(int i=0;i<s.length();i++)
			{
				if(s.at(i)=='0')
				s.at(i)='1';
				else
				s.at(i)='0';
			}
		}
		
		void displayones(void)
		{
			ones();
			cout<<"\nThe 1's compliment of the above binary number is:"<<s;
		}
};

int main()
{
	binary b;
	b.read();
	b.displayones();
	getch();
	return 0;
}

/*

enter a binary number:110101

The 1's compliment of the above binary number is:001010

enter a binary number:1101210

Incorrect binary number format..the program will quits

*/
