#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int row = 1; row <= n; row++)
    {
        for(int col = 1; col <= n - row; col++)
        {
            cout <<" ";
            }
        for(int col = 1; col <= 2*row -1; col++)
       { 
        cout<<"*"; 
        }
        cout<< endl;
    }


    return 0;
}
