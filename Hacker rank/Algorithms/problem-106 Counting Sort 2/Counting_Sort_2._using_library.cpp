#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countingSort(vector<int> arr)
    {
        sort(arr.begin(), arr.end());

        return arr;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1, 3, 2, 1};
    vector<int> ans = obj.countingSort(arr);
    int len = ans.size();
    for (int i = 0; i < len; i++)
        cout << ans[i] << " ";
    return 0;
}