#include <iostream>
using namespace std;

// check if the given number is prime Number or not

int main(){
    int num, input;
    cin >> input;
    for(num = 0; num <= input; num++)
    if(input % 2 == 0 && input % input/2 ==0)
    cout <<input <<" is a prime number";
    else
    cout <<input <<" is not a prime number";

}