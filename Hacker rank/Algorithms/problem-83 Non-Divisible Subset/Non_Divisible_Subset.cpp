#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int nonDivisibleSubset(int k, vector<int> s)
    {
        long long int result = 0;
        int len = s.size(), freq[k] = {0};

        for (int i = 0; i < len; i++)
        {
            freq[s[i] % k]++;
        }

        //  if K is even, then update f[K/2], with minimum value
        if (k % 2 == 0)
            freq[k / 2] = min(freq[k / 2], 1);

        if (freq[0])
            result = 1;

        // Choose maximum of count of numbers
        // giving remainder i or k-i
        for (int i = 1; i <= k / 2; i++)
        {
            result += max(freq[i], freq[k - i]);
        }

        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {19, 10, 12, 10, 24, 25, 22};
    obj.nonDivisibleSubset(4, arr);

    return 0;
}