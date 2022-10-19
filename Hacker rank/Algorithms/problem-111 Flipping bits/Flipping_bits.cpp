#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long flippingBits(long n)
    {
        return pow(2, 32) + ~n;
    }
};

int main(void)
{
    Solution obj;
    long res = obj.flippingBits(2147483647);
    cout << res << endl;
    return 0;
}