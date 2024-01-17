#include <iostream>
using namespace std;
  
int main() {
    float fahren, celsius;
  
    cout << "Enter the temperature in fahrenheit:\n";
    cin >> fahren;
     
    celsius = 5 * (fahren - 32) / 9;
    
    cout << fahren <<" Fahrenheit is equal to "
        << celsius <<" Centigrade";
      
    return 0;
}


// OUTPUT....

/*
Enter the temperature in fahrenheit
45
45 Fahrenheit is equal to 7.22222 Centigrade

*/
