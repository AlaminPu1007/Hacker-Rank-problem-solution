#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string gameOfStones(int n)
    {
        return (n % 7 < 2) ? "Second" : "First";
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.gameOfStones(9);
    cout << ans << endl;
    return 0;
}