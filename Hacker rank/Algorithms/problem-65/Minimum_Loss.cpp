#include <iostream>
#include <map>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int minimumLoss(vector<long> price)
    {
        map<int, int> Map;
        vector<pair<long, int>> prices;

        int len = price.size();

        long long min = LONG_MAX;

        // make key value pair with vector
        for (int i = 0; i < len; i++)
        {
            prices.push_back(make_pair(price[i], i));
        }
        // sort those vector element
        sort(prices.begin(), prices.end());

        for (int i = 0; i < len - 1; i++)
        {
            // prices[i].first -> is the original array value
            // prices[i + 1].second --> is the i value, that has been given
            if (min > (prices[i + 1].first - prices[i].first) &&
                prices[i].second > prices[i + 1].second)
            {
                min = prices[i + 1].first - prices[i].first;
            }
        }

        // cout << min;

        return min;
    }
};

int main(void)
{
    Solution obj;

    vector<long> arr = {20, 7, 8, 2, 5};

    obj.minimumLoss(arr);

    return 0;
}