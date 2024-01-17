//array of objects

#include<iostream>
using namespace std;

class employee
{
	static int id;
	int salary;
	char name[50];
	char city[50];
	int age;
	char gender;
	
	public:
		
		void getdata()
		{
			
						
			cout<<"\nEnter salary:";
			cin>>salary;
			
			cout<<"\nEnter name:";
			cin>>name;
			
			cout<<"\nEnter city:";
			cin>>city;
			
			cout<<"\nEnter age:";
			cin>>age;
			
			cout<<"\nEnter gender(write 'm' for male and 'f' for female) : ";
			cin>>gender;
			
			id++;
			
		}
		
		void displaydata()
		{
		
		cout<<"id :"<<id<<endl;	
		cout<<"salary :"<<salary<<endl;	
		cout<<"name:"<< name <<endl;
		cout<<"city  :"<< city <<endl;
		cout<<"age :"<<age <<endl;
		cout<<"gender :"<<gender <<endl;	
		}
		
		int getage()
		{
			return age;
		}
		
		int getsalary()
		{
			return salary;
		}
		
		int getgender()
		{
			return gender;
		}
		
		};
		
		
		int employee::id;
		
		
		
		int main()
		{
			employee e[5],e1;
			
			int max=0,pos,m25count=0;
			
			for(int i=0;i<5;i++)
			e[i].getdata();
			
			for(int i=0;i<5;i++)
			e[i].displaydata();
			
			
			//Employee with maximum salary
			
			
			for(int i=0;i<5;i++)
			{
				if(max < e[i].getsalary())
				{
					max=e[i].getsalary();
					pos=i;
				}
				
				//number of male employees of age >25
				
				if(e[i].getgender() =='m' && e[i].getage()>25)
				
				m25count++;
			}
			
			
		
		
		cout<<"\nEmployee with maximum salary is: ";
		e[pos].displaydata();
		cout<<"\nnumber of male employees of age >25 is : "<<m25count;
}




//output

/*

Enter salary:60000

Enter name:khushi

Enter city:ahmedabad

Enter age:12

Enter gender(write 'm' for male and 'f' for female) : f

Enter salary:45000

Enter name:jil

Enter city:surat

Enter age:67

Enter gender(write 'm' for male and 'f' for female) : m

Enter salary:3000

Enter name:kavya

Enter city:baroda

Enter age:23

Enter gender(write 'm' for male and 'f' for female) : f

Enter salary:50000

Enter name:aagam

Enter city:mumbai

Enter age:76

Enter gender(write 'm' for male and 'f' for female) : m

Enter salary:5000

Enter name:aarav

Enter city:pune

Enter age:44

Enter gender(write 'm' for male and 'f' for female) : m



salary :60000
name:khushi
city  :ahmedabad
age :12
gender :f
salary :45000
name:jil
city  :surat
age :67
gender :m
salary :3000
name:kavya
city  :baroda
age :23
gender :f
salary :50000
name:aagam
city  :mumbai
age :76
gender :m
salary :5000
name:aarav
city  :pune
age :44
gender :m



Employee with maximum salary is: salary :60000
name:khushi
city  :ahmedabad
age :12
gender :f

number of male employees of age >25 is : 3

*/




