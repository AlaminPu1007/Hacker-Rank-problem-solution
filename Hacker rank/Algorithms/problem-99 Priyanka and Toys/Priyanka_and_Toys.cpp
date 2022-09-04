#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int toys(vector<int> w)
    {
        sort(w.begin(), w.end());
        int len = w.size(), ans = 1, value = w[0];

        for (int i = 1; i < len; i++)
        {
            if (w[i] > value + 4)
            {
                ans++;
                value = w[i];
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3, 21, 7, 12, 14, 21};
    int res = obj.toys(arr);
    cout << res << endl;
    return 0;
}
