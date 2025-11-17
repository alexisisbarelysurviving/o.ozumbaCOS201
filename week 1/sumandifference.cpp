#include <iostream>

using namespace std;


int sum () {
    double f;
    double s;
    cout << "input your first digit:" ;
    cin >> f;
    cout << "input your second digit: " ;
    cin >> s;

    double sumoperation = f + s;
    cout << "the sum of your values is ===>" << sumoperation;
    return 0;
}

int difference () {
    double f;
    double s;
    cout << "input your first digit:" ;
    cin >> f;
    cout << "input your second digit: " ;
    cin >> s;

    double differenceoperation = f - s;
    cout << "the difference of your values is ===>" << differenceoperation;
    return 0;
}


int main() 
{
   int choice;
   cout << "what calculation would you like to perform?";
   cout << "choose 1 for sum";
   cout << "choose 2 for difference";

   cin>>choice;
   if (choice==1) {
     sum();
   }
   else if (choice==2) {
     difference();
   }
   else {
    cout << "invalid choice!";
   }
return 0;
}