#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> maxSubarray(vector<int> arr)
    {
        int len = arr.size(), max_value = 0, sum = 0;
        int positive_sum = 0;

        // if all elements are negative
        int m = *max_element(arr.begin(), arr.end());
        if (m < 0)
            return {m, m};

        for (int i = 0; i < len; i++)
        {
            max_value = max(0, max_value + arr[i]);
            sum = max(sum, max_value);

            if (arr[i] > 0)
                positive_sum += arr[i];
        }

        return {sum, positive_sum};
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, -1, 2, 3, 4, -5};
    vector<int> ans = obj.maxSubarray(arr);

    int len = ans.size();

    for (int i = 0; i < len; i++)
        cout << ans[i] << " ";

    return 0;
}