#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string nimGame(vector<int> pile)
    {
        int len = pile.size();
        int res = 0;
        for (int i = 0; i < len; i++)
        {
            res ^= pile[i];
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
    string ans = obj.nimGame(arr);
    cout << ans << endl;
    return 0;
}