#include <iostream>
using namespace std;

// Taking user input-> Print perfect if a number is divisible by both 3 and 5 else print not perfect
/*
int main() {
    int num;
    cin >> num;
    if(num % 3 == 0 && num % 5 == 0)
    cout <<num <<" is a perfect number";
    else
    cout <<num <<" is not a perfect number";
    return 0;
}
*/

// Homework -> print perfect if a number is divisible by 7 or 11 else print not perfect

int main(){
    int num;
    cin >> num;
    if(num % 7 == 0 || num % 11 == 0)
    cout <<num <<" is a perfect number";
    else
    cout <<num <<" is not a perfect number";
    return 0;
}