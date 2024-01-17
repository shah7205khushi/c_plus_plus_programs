#include<iostream>
using namespace std;

const int m=50;
class order
{
	int itemcode[m];
	float itemprice[m];
	int count;
	
	public:
		void cnt(void)
		{
			count=0;
		}
		
		void getitem(void);
		void displaysum(void);
		void remove(void);
		void displayitems(void);
		
};

void order::getitem(void)
{
	cout<<"enter item code:"<<endl;
	cin>>itemcode[count];
	cout<<"enter price:";
	cin>>itemprice[count];
	count++;
	
}

void order::displaysum(void)
{
	float sum=0;
	for(int i=0;i<count;i++)
	sum=sum+itemprice[i];
	cout<<"\ntotal value:"<<sum<<"\n";
}

void order::displayitems(void)
{
	cout<<"\n code price\n";
	for(int i=0;i<count;i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<" "<<itemprice[i];
	}
	
	cout<<"\n";
}

void order::remove()
{
	int a;
	cout<<"\nEnter the item to be deleted:";
	cin>>a;
	for(int i=0;i<count;i++)
	{
		if (itemcode[i]==a)
		itemprice[i]=0;
	}
	
}

int main()
{
	order o1;
	o1.cnt();
	int x;
	
	do
	{
		cout<<"enter appropriate number\n";
		cout<<"\n1:add an item";
		cout<<"\n2:display total value";
		cout<<"\n3:delete an item ";
		cout<<"\n4:Display all item";
		cout<<"\n5:Quit";
		
		cin>>x;
		
		switch(x)
		{
			case 1 : 
					o1.getitem();
					break;
						
			case 2:
				  	o1.displaysum();
					  break;
					  
			case 3:
					o1.remove();
					break;
					
			case 4:
					o1.displayitems();
					break;
					
			case 5:break;
			
			default:
					cout<<"Error in input;try again\n";
									  			
		}
	}while(x != 5);
	
	return 0;
}

//output

/*

enter appropriate number

1:add an item
2:display total value
3:delete an item
4:Display all item
5:Quit1
enter item code:
1
enter price:345
enter appropriate number

1:add an item
2:display total value
3:delete an item
4:Display all item
5:Quit1
enter item code:
2
enter price:6778
enter appropriate number

1:add an item
2:display total value
3:delete an item
4:Display all item
5:Quit1
enter item code:
3
enter price:576
enter appropriate number

1:add an item
2:display total value
3:delete an item
4:Display all item
5:Quit2

total value:7699
enter appropriate number

1:add an item
2:display total value
3:delete an item
4:Display all item
5:Quit4

 code price

1 345
2 6778
3 576
enter appropriate number

1:add an item
2:display total value
3:delete an item
4:Display all item
5:Quit3

Enter the item to be deleted:3
enter appropriate number

1:add an item
2:display total value
3:delete an item
4:Display all item
5:Quit4

 code price

1 345
2 6778
3 0
enter appropriate number

1:add an item
2:display total value
3:delete an item
4:Display all item
5:Quit5
*/
