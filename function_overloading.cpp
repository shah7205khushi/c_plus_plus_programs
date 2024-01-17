//function_overloading(edition-6)

#include<iostream>
#include<iomanip>
using namespace std;

int area(int);
int area(int,int);
double area(double);

int main()
{
	cout<<"area of square:"<<area(5)<<endl;
	cout<<"area of rectangle:"<<area(5,10)<<endl;
	cout<<"area of circle:"<<area(5.5)<<endl;
	
	return 0;
	
 } 
 
 int area(int side)
 {
 	return(side*side);
 }
 
 int area(int length,int breadth)
 {
 	return(length*breadth);
 }
 
 double area(double radius)
 {
 	return(3.14*radius*radius);
 }
 
 //output
 
 /*
 area of square:25
area of rectangle:50
area of circle:94.985

*/
