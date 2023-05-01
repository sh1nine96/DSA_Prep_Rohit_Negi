#include<iostream>
#include<vector>
using namespace std;

class Solution{

  public:
    int MissingNumber(vector<int>& array, int n) {
        // Your code goes here
        int sum = n*(n+1)/2;
        int array_sum = 0;
        for (int i = 0; i < n-1; i++)
        {
            array_sum = array_sum + array[i];
           
        }
        return sum - array_sum;
    }

};

int main(){
        int n;
        cin >> n;
        vector<int> array(n-1);
        for(int i = 0; i < n -1; i++)
        {
            cin >> array[i];
        }

        Solution obj;
        int missing_number = obj.MissingNumber(array, n);
        cout <<missing_number <<endl;
        return 0;
    }