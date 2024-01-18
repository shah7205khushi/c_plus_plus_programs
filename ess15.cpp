//Menudriven program of bank

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>
using namespace std;

class bank
{
	int acc_no;
	char name[35];
	char ac_type[35];
	double opening_bl;
	double closing_bl;
	
	public:
		
		
		
		void getdata()
		{
			cout<<"enter accno,name ,actype,opening bl"<<endl;
			cin>>acc_no>>name>>ac_type>>opening_bl;
			closing_bl = opening_bl;
		}
		
		
		void showdata()
		{
			cout<<"Account No = "<<acc_no<<endl;
			cout<<"Name = "<<name<<endl;
			cout<<"Account Type = "<<ac_type<<endl;
			cout<<"opening balance= "<<opening_bl<<endl;
			cout<<"closing balance= "<<closing_bl<<endl;
		}
		
		void deposit(double p)
		{
			closing_bl+=p;
		}
		
		
		void withdrow(double tmp_amt)
		{
			closing_bl-=tmp_amt;
		}
		
		
		double rclbal()
		{
			return(closing_bl);
		}
		
		
		double raccno()
		{
			return(acc_no);
		}
		
		
		
		
};

int main()
{
	bank b[3];
	int i,choice,cnt=0,taccno,found;
	double tmp_amt;
	
	do
	{
		cout<<"1 for new account"<<endl;
		cout<<"2 for check balance"<<endl;
		cout<<"3 for deposit"<<endl;
		cout<<"4 for withdraw"<<endl;
		cin>>choice;
		
		switch(choice)
		{
			case 1:
				if(cnt<=2)
				{
					b[cnt].getdata();
					cnt++;
				}
				break;
				
				
				case 2:
					cout<<"enter acc_no"<<endl;
					cin>>taccno;
					found=0;
					for(i=0;i<cnt;i++)
					{
						if(taccno == b[i].raccno())
						{
							found=1;
							cout<<"balance = "<<b[i].rclbal()<<endl;
							break;
						}
					}
					
					
					if(found==0)
					
						cout<<"acc_no not found"<<endl;
						break;
					
					
					
					case 3:
						cout<<"enter acc_no for deposit"<<endl;
						cin>>taccno;
						found=0;
						for(i=0;i<cnt;i++)
						{
							if(taccno==b[i].raccno())
							{
								found=1;
								break;
							}
						}
						
						
						if(found)
						{
							cout<<"enter amount to deposit"<<endl;
							cin>>tmp_amt;
							b[i].deposit(tmp_amt);
						}
					
					else
					
					cout<<"acc_no not found"<<endl;
					break;
				    
				    
					case 4:
						cout<<"enter accno for withdraw"<<endl;
						cin>>taccno;
						found=0;
						for(i=0;i<cnt;i++)
						{
							if(taccno == b[i].raccno())
							{
								found=1;
								break;
							}
						}
						
						
						if(found)
						{
							cout<<"enter amount to withdraw"<<endl;
							cin>>tmp_amt;
							
							if(b[i].rclbal() >= tmp_amt)
							
							
							b[i].withdrow(tmp_amt);
							
						
						}
							
					
							else
							
								cout<<"acc_no not found"<<endl;
								break;
							
						
						
		}
					
	}	while(choice>=1 && choice<=4);
						return 0;
						
					}


//output

/*

1 for new account
2 for check balance
3 for deposit
4 for withdraw
1
enter accno,name ,actype,opening bl
123
khushi
saving
1000
1 for new account
2 for check balance
3 for deposit
4 for withdraw
2
enter acc_no
123
balance = 1000
1 for new account
2 for check balance
3 for deposit
4 for withdraw
3
enter acc_no for deposit
123
enter amount to deposit
3000
1 for new account
2 for check balance
3 for deposit
4 for withdraw
4
enter accno for withdraw
123
enter amount to withdraw
1000
1 for new account
2 for check balance
3 for deposit
4 for withdraw
2
enter acc_no
123
balance = 3000
1 for new account
2 for check balance
3 for deposit
4 for withdraw
1
enter accno,name ,actype,opening bl
456
jil
current
500
1 for new account
2 for check balance
3 for deposit
4 for withdraw
2
enter acc_no
789
acc_no not found
1 for new account
2 for check balance
3 for deposit
4 for withdraw
3
enter acc_no for deposit
897
acc_no not found
1 for new account
2 for check balance
3 for deposit
4 for withdraw
4
enter accno for withdraw
756
acc_no not found
1 for new account
2 for check balance
3 for deposit
4 for withdraw

*/
