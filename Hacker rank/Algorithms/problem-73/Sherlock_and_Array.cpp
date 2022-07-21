#include <bits/stdc++.h>
using namespace std;

class Solution
{

public:
    string balancedSums(vector<int> arr)
    {
        int sum = 0, reSum = 0, len = arr.size();
        for (int i = 0; i < len; i++)
            sum += arr[i];

        for (int i = 0; i < len; i++)
        {
            sum -= arr[i];
            if (sum == reSum)
                return "YES";
            reSum += arr[i];
        }

        return "NO";
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1, 4, 1, 1};
    obj.balancedSums(arr);
    return 0;
}