#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0)); // seed random numbers

    int number1 = rand() % 10;
    int number2 = rand() % 10;

    // ensure number1 is greater than or equal to number2
    if (number1 < number2) {
        int temp = number1;
        number1 = number2;
        number2 = temp;
    }

    int diff = number1 - number2;
    int guess;

    cout << "What is " << number1 << " - " << number2 << "? ";
    cin >> guess;

    cout <<"\n "<< guess; 

    if (guess == diff) {
        cout << "You are correct!";
    } else {
        cout << "Wrong. The correct answer is " << diff << ".";
    }

    return 0;
}
