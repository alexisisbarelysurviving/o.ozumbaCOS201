#include <iostream>
using namespace std;

int main()
{
  
   int age;
   cout << "enter your age";
   cin >> age;
   

   if (age >= 18) {
     cout << "You are an adult";
   }   
   else if (age < 18) {
    cout << "You are not an adult";
   }
  
    return 0;
}