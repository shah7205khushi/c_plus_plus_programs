/*write a program to read two numbers from the keyboard and display the 
 larger value on the screen
 */
 
#include<iostream>
using namespace std;
int main()
{
    int num1, num2, max;
    
    cout<<"Enter number1: ";
    
    cin>>num1;
    cout<<"\n";
    
    cout<<"Enter number2: ";
	cin>>num2;
    
    
    
    
    
    if(num1>num2)
        max= num1;
    else
        max = num2;
        
    cout<<"\n maximum = "<<max<<endl;
    return 0;
}



//OUTPUT..

/*
Enter number1: 23

Enter number2: 56

 maximum = 56
 
 */
