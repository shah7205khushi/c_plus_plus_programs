//another example of friend function

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class db;
class dm
{
	int mtr;
	float cm;
	
	public:
		void getdata()
		{
			cout<<"enter meter and cm"<<endl;
			cin>>mtr>>cm;
		}
		
		void showdata()
		{
			cout<<"mtr= "<<mtr<<endl;
			cout<<"cm= "<<cm<<endl;
		}
		
		friend dm sum(dm,db);
		friend db sum(db,dm);
};

class db
{
	int feet;
	float inch;
	
	public:
		void getdata()
		{
			cout<<"enter feet and inch"<<endl;
			cin>>feet>>inch;
		}
		
		void showdata()
		{
			cout<<"feet= "<<feet<<endl;
			cout<<"inch= "<<inch<<endl;
			
		}
		
		friend dm sum(dm,db);
		friend db sum(db,dm);
};

dm sum(dm p,db q)
{
	dm tmp;
	tmp.cm=(p.mtr*100)+p.cm+((q.feet*12)+ q.inch)*2.5;
	if(tmp.cm >= 100)
	{
		tmp.mtr = tmp.cm/100;
		tmp.cm = tmp.cm - (tmp.mtr * 100);
	}
	else 
		tmp.mtr=0;
		return(tmp);
 } 
 
 db sum(db q,dm p)
 {
 	db tmp;
 	tmp.inch = (q.feet*12) + q.inch+((p.mtr*100)+p.cm)/2.5;
 	if(tmp.inch >= 12)
 	{
 		tmp.feet=tmp.inch/12;
 		tmp.inch=tmp.inch-(tmp.feet * 12);
	 }
	 else
	 tmp.feet=0;
	 return(tmp);
 }
 
 int main()
 {
 	dm p,r;
 	db q,s;
 	int choice;
 	p.getdata();
 	q.getdata();
 	do
 	{
 		cout<<"1 for ans in dm"<<endl;
 		cout<<"2 for ans in db"<<endl;
 		cin>>choice;
 		
 		switch(choice)
 		{
 			case 1:
 				r=sum(p,q);
 				r.showdata();
 				break;
 				
 			case 2:
			 	s=sum(q,p);
				s.showdata();
				break; 	
		 }
	 }while (choice>=1 && choice<=2);
	 return 0;
 }
 
 /*
 
 enter meter and cm
5
7
enter feet and inch
4
2
1 for ans in dm
2 for ans in db
1
mtr= 6
cm= 32
1 for ans in dm
2 for ans in db
2
feet= 21
inch= 0.800003
1 for ans in dm
2 for ans in db

*/





