#include <bits/stdc++.h>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    while (n--)
    {
        int B, W, X, Y, Z;
        cin >> B >> W >> X >> Y >> Z;

        long long res = (long long)B * X + (long long)W * Y;
        res = min(res, (long long)B * X + (long long)W * (X + Z));
        res = min(res, (long long)B * (Y + Z) + (long long)W * Y);

        cout << res << endl;
    }

    return 0;
}
