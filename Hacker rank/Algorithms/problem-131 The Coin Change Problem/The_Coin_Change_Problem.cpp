
/*
    [learn solution from there](https://github.com/mission-peace/interview/blob/master/src/com/interview/dynamic/CoinChanging.java)
 */
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long getWays(int n, vector<long> c)
    {

        vector<long> temp(n + 1, 0);

        temp[0] = 1;

        for (int i = 0; i < c.size(); i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (j >= c[i])
                {
                    // get prv value from c[i]
                    temp[j] += temp[j - c[i]];
                }
            }
        }
        return temp[n];
    }
};

int main(void)
{
    Solution obj;
    vector<long> arr = {1, 5, 6, 8};
    long res = obj.getWays(11, arr);
    cout << res << endl;
    return 0;
}
