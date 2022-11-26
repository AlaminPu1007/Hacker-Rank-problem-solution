#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string nimbleGame(vector<int> s)
    {
        int len = s.size();
        int sum = 0, count = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] % 2 == 1)
                sum ^= count;

            count++;
        }

        if (sum)
            return "First";
        return "Second";
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 2, 3, 0, 6};
    string ans = obj.nimbleGame(arr);
    cout << ans << endl;
    return 0;
}