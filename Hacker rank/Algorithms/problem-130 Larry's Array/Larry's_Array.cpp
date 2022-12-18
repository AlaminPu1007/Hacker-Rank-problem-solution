#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string larrysArray(vector<int> A)
    {
        int len = A.size(), count = 0;
        for (int i = 0; i < len; i++)
            for (int j = i + 1; j < len; j++)
                if (A[i] > A[j])
                    count++;

        if (count % 2 == 0)
            return "YES";
        return "NO";
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 3, 4, 2};
    string ans = obj.larrysArray(arr);
    cout << ans << endl;
    return 0;
}