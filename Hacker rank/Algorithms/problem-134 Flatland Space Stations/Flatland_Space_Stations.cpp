#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int flatlandSpaceStations(int n, vector<int> c)
    {
        int len = c.size();

        if (len == n)
            return 0;

        // sort array
        sort(c.begin(), c.end());
        // set max distance between first or last cities
        int maxDis = max(c[0], n - 1 - c[len - 1]);

        for (int i = 0; i < len - 1; i++)
        {
            maxDis = max(maxDis, (c[i + 1] - c[i]) / 2);
        }

        return maxDis;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {0, 4};
    int res = obj.flatlandSpaceStations(3, arr);
    cout << "Result is " << res << endl;
    return 0;
}