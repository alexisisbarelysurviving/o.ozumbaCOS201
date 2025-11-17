#include <iostream>
using namespace std;

int main()
{
  
   int number;
   cout << "enter a number";
   cin >> number;
   

   if (number % 5 ==0) {
     cout << "HIFIVE";
   }   
   else if (number % 5 !=0) {
    cout << "invalid choice!";
   }
  
    return 0;
}