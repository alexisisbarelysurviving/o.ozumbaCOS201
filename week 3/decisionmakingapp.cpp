#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    bool isPauStudent;
    int course;
    int location;

    cout << "enter your full name ==> ";
    cin>>name;
    
    cout << "are you a pau student? (1 for true,0 for false) ==>" ;
    int flag;
    cin>>flag;
    isPauStudent = (flag != 0);

    cout<< "enter your course(1-5): photography, painting, fishing, baking, public speaking";
    cin>>course;

    cout<< "enter your location(1-5): camp house A, camp house B, camp house C, camp house D, camp house E";
    cin>>location;

   //
    string coursename;
    int days = 0 ;
    double registrationfees = 0.0;

    if (course == 1){
        coursename= "photography";
        days= 3;
        registrationfees= 10000;
    }
    else if (course == 2){
        coursename= "painting";
        days= 5;
        registrationfees= 8000;
    }
    else if (course == 3){
        coursename= "fishing";
        days= 7;
        registrationfees= 15000;
    }
    else if (course == 4){
        coursename= "baking";
        days= 5;
        registrationfees= 13000;
    }
    else if (course == 5){
        coursename= "public speaking";
        days= 2;
        registrationfees= 5000;
    }
    else {
        cout << "invalid";
        return 1;
    }

 //location code
 string locationname;
 double lodgingperday = 0.0;

 if (location == 1){
    locationname= "camp house a";
    lodgingperday= "10000";
 }
 else if (location == 2){
    locationname= "camp house b";
    lodgingperday= "2500";
 }
 else if (location == 3){
    locationname= "camp house c";
    lodgingperday= "5000";
 }
 else if (location == 4){
    locationname= "camp house d";
    lodgingperday= "13000";
 }
 else if (location == 5){
    locationname= "camp house e";
    lodgingperday= "5000";
 }
 else{
    cout <<"invalid";
    return 1;
 }

 double lodgingcost = lodgingperday * days ;
 double lodgingdiscount = 0.0;
 double regDiscount = 0.0;

 if (isPauStudent && (location == 1 || location == 2)){
    lodgingdiscount = 0.05 * lodgingcost;
 }

 double lodgingcostAfter = lodgingcost - lodgingdiscount;

 if ((days >5)||(registrationfees > 12000)){
    regDiscount = 0.03*registrationfees
 }
 double regdiscountAfter = registrationfees - regDiscount;
 double total = registrationfees + lodgingcostAfter;

 //randompromo
 srand(time(0));
 int r = (rand()%100) +1;
 double promo = 0.0;
 if (r==7 || r==77){
    promo = 500.0
 }

 cout << "name:"<<name;
 cout << "pau student: "<<(isPauStudent);
 cout << "name:"<<name;




    return 0;
}
