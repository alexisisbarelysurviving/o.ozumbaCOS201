#include <iostream>
using namespace std;

int main (){
    int year;
    int zodiacdetermination;

    cout<<"enter your birth year ====>";
    cin>>year;

    zodiacdetermination = year % 12;

    switch(zodiacdetermination){
        case 0:
          cout<<"monkey";
          break;
        case 1:
          cout<<"rooster";
          break;
        case 2:
          cout<<"dog";
          break;
        case 3:
          cout<<"pig";
          break;
        case 4:
          cout<<"rat";
          break;
        case 5:
          cout<<"ox";
          break;
        case 6:
          cout<<"tiger";
          break;
        case 7:
          cout<<"rabbit";
          break;
        case 8:
          cout<<"dragon";
          break;
        case 9:
          cout<<"snake";
          break;
        case 10:
          cout<<"horse";
          break;
        case 11:
          cout<<"sheep";
          break;
        default:
          cout<<"invalid";
    }
          
return 0;
}