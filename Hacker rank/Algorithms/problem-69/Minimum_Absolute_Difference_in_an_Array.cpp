#include <iostream>
#include <vector>
#include <map>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minimumAbsoluteDifference(vector<int> arr)
    {
        int min = INT_MAX, i, dif = 0;
        int arr_len = arr.size();

        sort(arr.begin(), arr.end());

        for (i = 0; i < arr_len - 1; i++)
        {
            dif = arr[i + 1] - arr[i];
            if (dif < min)
            {
                min = dif;
                if (min == 0)
                {
                    return 0;
                }
            }
        }

        return min;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {-59, -36, -13, 1, -53, -92, -2, -96, -54, 75};
    int res = obj.minimumAbsoluteDifference(arr);
    cout << res << endl;
    return 0;
}