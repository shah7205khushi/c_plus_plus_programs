 //dynamic initialization of objects

#include<iostream>
using namespace std;

class fixed_deposit
{
	long int p_amount;
	int years;
	float rate;
	float r_value;
	public:
		fixed_deposit(){
		}
		fixed_deposit(long int p,int y,float r=0.12);
		fixed_deposit(long int p,int y,int R);
		void display(void);
 };
 
 fixed_deposit :: fixed_deposit(long int p,int y,float r)
 {
 	p_amount = p;
 	years = y;
 	rate = r;
 	r_value = p_amount;
 	for(int i=1;i<=y;i++)
 	r_value = r_value * (1.0 + r); 
  } 
  
  fixed_deposit :: fixed_deposit(long int p,int y,int R)
  {
  	p_amount = p;
 	years = y;
 	rate = R;
 	r_value = p_amount;
 	for(int i=1;i<=y;i++)
 	r_value = r_value * (1.0+float(R)/100);
  	
  }
  
  
  void fixed_deposit ::display(void)
  {
  	cout<<endl<<"p_amount = "<<p_amount<<endl<<"r_value = "<<r_value<<endl;
  }
  
  int main()
  {
  	fixed_deposit fd1 ,fd2 ,fd3;
  	long int p;
  	int y;
  	float r;
  	int R;
  	
  	cout<<"enter amount , p and rate(in percent)"<<endl;
  	cin>>p>>y>>R;
  	fd1 = fixed_deposit(p,y,R);
  	
  	cout<<"enter amount , p and rate(decimal form)"<<endl;
  	cin>>p>>y>>r;
  	fd1 = fixed_deposit(p,y,r);
  	
  	cout<<"enter amount and period"<<endl;
  	cin>>p>>y;
  	fd1 = fixed_deposit(p,y);
  	
  	cout<<"deposit 1"<<endl;
  	fd1.display();
  	
  	cout<<"deposit 2"<<endl;
  	fd2.display();
  	
  	cout<<"deposit 3"<<endl;
  	fd3.display();
  	
  	return 0;
  }
