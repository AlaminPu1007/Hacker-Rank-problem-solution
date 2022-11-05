#include <bits/stdc++.h>
using namespace std;
#define ARRAY_SIZE = 101;

class Solution
{
public:
    int commonChild(string s1, string s2)
    {
        int m = s1.size(), n = s2.size();
        int memo[m + 1] = {0};

        for (int i = 1; i <= m; ++i)
        {
            int prev = 0;
            for (int j = 1; j <= n; ++j)
            {
                int temp = memo[j];
                if (s1[i - 1] == s2[j - 1])
                {
                    memo[j] = prev + 1;
                }
                else
                {
                    memo[j] = max(memo[j], memo[j - 1]);
                }
                prev = temp;
            }
        }
        return memo[m];
    }
};

int main(void)
{
    Solution obj;
    string str1 = "SHINCHAN", str2 = "NOHARAAA";
    int res = obj.commonChild(str1, str2);

    cout << res << endl;
    return 0;
}