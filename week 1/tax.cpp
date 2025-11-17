#include <iostream>
using namespace std;


int main(){
    double number;
    cout << "Enter a number: ";
    cin >> number;
    double result = number * 0.06; 
    cout << "6% of " << number << " is " << result << endl;

    return 0;
}