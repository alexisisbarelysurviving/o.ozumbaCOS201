//farenheit to celcius 
// c=5/9(f-32)

#include <iostream>

using namespace std;

int farenheitocelcius (){
    double f; 
    cout << "What is your value in farenheit?";
    cin >> f;
    double c = 5.0/9.0*(f-32);
    cout << "your value in celcius is ===>" << c;
    return 0;
}

int celciustofarenheit (){
    double c;
    cout << "What is your value in celcius?";
    cin >> c;
    double f = (c*9.0/5.0)+32;
    cout << "your value in farenheit is ===>" << f;
    return 0;
}



int main() 
{
    int choice;
   cout << "what calculation would you like to perform?";
   cout << "choose 1 for farenheit to celcius conversion";
   cout << "choose 2 for celcius to farenheit conversion";

   cin>>choice;
   if (choice==1) {
     farenheitocelcius();
   }
   else if (choice==2) {
     celciustofarenheit();
   }
   else {
    cout << "invalid choice!";
   }
return 0;
}
   
