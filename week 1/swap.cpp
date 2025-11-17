#include <iostream>
using namespace std;

int valueofa (){
    int a;
    cout << "enter a:";
    cin >> a;
    return a;
}

int valueofb (){
    int b;
    cout << "enter b:";
    cin >> b;
    return b;
}

int main (){
    int temp;
    int a = valueofa();
    int b = valueofb();

    cout << "\nBefore swapping: a = " << a << ", b = " << b << endl;

    // Swap using a temporary variable
    temp = a;
    a = b;
    b = temp;
    
    // Display after swapping
    cout << "After swapping:  a = " << a << ", b = " << b << endl;

    return 0;
}

