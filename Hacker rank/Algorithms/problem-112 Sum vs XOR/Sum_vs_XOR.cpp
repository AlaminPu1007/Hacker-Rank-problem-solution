#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long sumXor(long n)
    {

        long result = 1;
        while (n)
        {
            // check given in bit, is 0 or 1 by & operator
            int value = n & 1;
            // divide till n is not going to be 0
            n /= 2;
            if (!value)
                result *= 2;
        }
        return result;
    }
};

int main(void)
{
    Solution obj;
    long res = obj.sumXor(5);
    cout << res << endl;
    return 0;
}