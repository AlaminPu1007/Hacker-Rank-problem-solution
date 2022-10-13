#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string counterGame(long n)
    {
        long num = n;
        int count = -1;
        while (num != 1)
        {
            // check if power of 2
            if ((num & (num - 1)) == 0)
            {
                num = num / 2;
            }
            else
            {
                // find next lower power of 2
                int k = log2(num);
                num = num - pow(2, k);
            }
            count++;
        }

        if (count % 2 == 0)
            return "Louise";

        return "Richard";
    }
};
int main(void)
{
    Solution obj;
    string res = obj.counterGame(134);
    cout << res << endl;
    return 0;
}