#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int sansaXor(vector<int> arr)
    {
        int result = 0, len = arr.size();
        if (len % 2 == 0)
            return 0;

        for (int i = 0; i < len; i += 2)
            result ^= arr[i];
        return result;
    }
};
int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3};
    int res = obj.sansaXor(arr);
    cout << res << endl;
    return 0;
}