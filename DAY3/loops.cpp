#include <iostream>
using namespace std;

// print numbers 1 to 10 using for loop

/*
int main(){
    for(int num = 1; num <= 10; num++)
    cout <<num <<" ";
}
*/

// take user input and print numbers from 1 to until user wants

int main(){
    int num, count;
    cin >> count;

    for(num = 1; num <= count; num++)
    cout <<num << endl;
    return 0;

}