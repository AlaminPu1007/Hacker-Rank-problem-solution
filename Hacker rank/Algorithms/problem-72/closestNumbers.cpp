#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> closestNumbers(vector<int> arr)
    {
        vector<int> res;
        int min = INT_MAX;
        int len = arr.size();
        // sort our array
        sort(arr.begin(), arr.end());
        // find out the minimum distance from array element sub
        for (int i = 0; i < len - 1; i++)
        {
            int sub = abs(arr[i] - arr[i + 1]);
            if (sub < min)
            {
                min = sub;
            }
        }

        for (int i = 0; i < len - 1; i++)
        {
            int sub = abs(arr[i] - arr[i + 1]);
            if (sub == min)
            {
                res.push_back(arr[i]);
                res.push_back(arr[i + 1]);
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {5, 4, 3, 2};

    vector<int> res = obj.closestNumbers(arr);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";

    return 0;
}
