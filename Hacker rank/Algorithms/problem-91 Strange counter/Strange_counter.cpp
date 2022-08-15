#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long strangeCounter(long t)
    {
        long long int rem = 3;

        while (t > rem)
        {
            t = t - rem;
            rem *= 2;
        }

        return rem - t + 1;
    }
};

int main(void)
{
    Solution obj;
    obj.strangeCounter(4);
    return 0;
}