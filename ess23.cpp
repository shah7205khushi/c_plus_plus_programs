//run time matrix

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

class matrix
{
	int nrow,ncol;
	int **p;
	public:
		matrix(int,int);
		~matrix();
		
		void input(int r,int c,int val)
		{
			p[r][c] = val;
		}
		
		int display(int r,int c)
		{
			return(p[r][c]);
		}
};

matrix::matrix(int m,int n)
{
	int i;
	nrow=m;
	ncol=n;
	p=new int*[nrow];
	for(i=0;i<nrow;i++)
	p[i]= new int[ncol];
	
}

matrix :: ~matrix()
{
	int i;
	for(i=0;i<nrow;i++)
	delete(p[i]);
	delete(p);
}

int main()
{
	int nrows,ncols;
	cout<<"enter no of rows and cols"<<endl;
	cin>>nrows>>ncols;
	
	matrix m1(nrows,ncols);
	int num,i,j;
	for(i=0;i<nrows;i++)
	{
		for(j=0;j<ncols;j++)
		{
			cout<<"enter no"<<endl;
			cin>>num;
			m1.input(i,j,num);
		}
	}
	
	for(i=0;i<nrows;i++)
	{
		for(j=0;j<ncols;j++)
		cout<<setw(4)<<m1.display(i,j);
		cout<<endl;
	}
	return 0;
}

//output

/*

enter no of rows and cols
3
3
enter no
1
enter no
2
enter no
3
enter no
4
enter no
5
enter no
6
enter no
7
enter no
8
enter no
9
   1   2   3
   4   5   6
   7   8   9
   
   */
