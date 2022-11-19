#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string chessboardGame(int x, int y)
    {
        x--, y--;
        return ((x / 2) % 2 == 0 && (y / 2) % 2 == 0) ? "Second" : "First";
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.chessboardGame(5, 2);
    cout << ans << endl;
    return 0;
}