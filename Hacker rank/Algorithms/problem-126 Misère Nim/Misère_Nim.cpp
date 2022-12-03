#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string misereNim(vector<int> s)
    {
        int len = s.size();
        int sum = 0, xr = 0;

        for (int i = 0; i < len; i++)
        {
            xr ^= s[i];
            sum += s[i];
        }

        if (len % 2 == 0)
        {
            bool res = (len != sum) && (xr == 0);
            if (res)
                return "Second";

            return "First";
        }

        bool res = (len == sum) || (xr == 0);

        if (res)
            return "Second";

        return "First";
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 1, 3};
    string res = obj.misereNim(arr);
    cout << res << endl;
    return 0;
}