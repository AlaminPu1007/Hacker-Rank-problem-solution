#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string pokerNim(int k, vector<int> c)
    {
        int len = c.size();
        int res = 0;
        for (int i = 0; i < len; i++)
        {
            res ^= c[i];
        }

        if (res)
            return "First";

        return "Second";
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2};
    string ans = obj.pokerNim(5, arr);
    cout << ans << endl;
    return 0;
}