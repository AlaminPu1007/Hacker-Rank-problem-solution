#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int substrings(string n)
    {
        const int mod = 1000000007;
        int len = n.length();
        long long tmp = 0, ret = 0;

        for (int i = 0; i < len; i++)
        {
            tmp = ((tmp * 10) + (i + 1) * (n[i] - '0')) % mod;
            ret = (ret + tmp) % mod;
        }
        return ret;
    }
};

int main(void)
{
    Solution obj;
    obj.substrings("124");
    return 0;
}