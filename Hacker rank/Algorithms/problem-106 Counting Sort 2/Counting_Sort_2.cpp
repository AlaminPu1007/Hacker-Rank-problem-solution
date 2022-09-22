#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countingSort(vector<int> arr)
    {
        int len = arr.size();
        vector<int> ans;

        map<int, int> Map;
        for (int i = 0; i < len; i++)
            Map[arr[i]]++;

        for (auto item : Map)
        {
            int count = item.second;
            while (count--)
                ans.push_back(item.first);
        }

        return ans;
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