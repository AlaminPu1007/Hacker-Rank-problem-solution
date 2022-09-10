#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int getMinimumCost(int k, vector<int> c)
    {
        sort(c.begin(), c.end(), greater<int>());
        int len = c.size(), cost = 0;
        for (int i = 0; i < len; i++)
        {
            cost += (1 + i / k) * c[i];
        }

        return cost;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 5, 7, 9};
    obj.getMinimumCost(3, arr);
    return 0;
}