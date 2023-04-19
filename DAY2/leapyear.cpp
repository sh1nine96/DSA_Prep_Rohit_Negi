#include <iostream>
using namespace std;

// we have to find out which year is a leap year
/*
we have to check 2 conditions
(i)-> if the year is divisible by 400 then it's a leap year
(ii)-> the year should be divisible by 4 but not by 100 at the same time
*/ 


int main() {
   /* int year = 1900;

    if(year % 400 == 0)
    cout <<"It is a leap year" ;
    else if(year % 4 == 0 && year % 100 != 0)
    cout <<"It is a leap year" ;
    else
    cout <<"It is not a leap year" ;
    return 0; */

    int year;
    cin >> year;
    if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
    cout <<year <<" is a leap year";
    else
    cout <<year <<" is not a leap year" <<endl;
    return 0;

}