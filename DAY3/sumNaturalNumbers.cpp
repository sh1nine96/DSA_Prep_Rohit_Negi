#include<iostream>
using namespace std;

// we will take user input and print sum of n natural numbers

int main(){
    int num, sum =0, count;
    cin >> count;
    for(num = 1; num <= count; num++)
    sum = sum + num;
    cout <<"the sum of n natural numbers are " <<sum; 
    return 0;
}