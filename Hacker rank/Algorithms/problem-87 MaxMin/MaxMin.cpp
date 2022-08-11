#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
      int maxMin(int k, vector<int> arr) {
        int len = arr.size(), min = 10e9;
        //sort array with (nlog(n))
        sort(arr.begin(), arr.end());
        
        for(int i = 0; i <= len - k; i++)
        {
            int value = arr[i + k - 1] - arr[i];
            if(value < min)
            min = value;
        }
        return min;
      }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1,2,3,4,10,20,30,40,100,200};
    obj.maxMin(4, arr);
    return 0;
}