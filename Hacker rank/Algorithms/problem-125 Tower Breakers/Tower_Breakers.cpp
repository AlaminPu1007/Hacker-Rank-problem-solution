#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int towerBreakers(int n, int m)
    {
        if (n % 2 == 1 && m != 1)
            return 1;

        return 2;
    }
};

int main(void)
{
    Solution obj;
    int ans = obj.towerBreakers(2, 3);
    cout << ans << endl;
    return 0;
}