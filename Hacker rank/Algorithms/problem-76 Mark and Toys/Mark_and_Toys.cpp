#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maximumToys(vector<int> prices, int k)
    {
        int count = 0, len = prices.size();
        long int sum = 0;
        // we need to sort our array
        sort(prices.begin(), prices.end());
        for (int i = 0; i < len; i++)
        {
            sum += prices[i];
            if (sum <= k)
            {
                count++;
            }
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 12, 5, 111, 200, 1000, 10};
    obj.maximumToys(arr, 50);
    return 0;
}