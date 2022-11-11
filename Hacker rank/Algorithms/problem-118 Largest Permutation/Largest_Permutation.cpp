#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> largestPermutation(int k, vector<int> arr)
    {
        int len = arr.size();
        vector<int> item(len + 1, 0);

        for (int i = 0; i < len; i++)
        {
            item[arr[i]] = i;
        }

        int current = 0;

        for (int i = len; i > 0; i--)
        {
            if (arr[current] != i)
            {
                int temp = arr[current];
                // update value from current array index with large element form array
                swap(arr[current], arr[item[i]]);
                // after first swap we also need to update item array by previous swap index
                swap(item[i], item[temp]);
                k--;

                if (k <= 0)
                    break;
            }
            current++;
        }

        return arr;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 2, 3, 5, 1};
    vector<int> ans = obj.largestPermutation(1, arr);
    int len = ans.size();

    for (int i = 0; i < len; i++)
        cout << ans[i] << " ";

    return 0;
}