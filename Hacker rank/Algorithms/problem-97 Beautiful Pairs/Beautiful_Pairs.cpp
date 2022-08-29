#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int beautifulPairs(vector<int> A, vector<int> B)
    {
        int len1 = A.size(), len2 = B.size(), count = 0;
        map<int, int> Map;
        // loop through first array
        for (int i = 0; i < len1; i++)
            Map[A[i]]++;

        for (int i = 0; i < len2; i++)
        {
            if (Map[B[i]])
            {
                count++;
                Map[B[i]]--;
            }
        }

        if (count == len1)
            return count - 1;

        return count + 1;
    }
};

int main(void)
{
    Solution obj;
    vector<int> A = {1, 2, 3, 4}, B = {1, 2, 3, 3};
    int res = obj.beautifulPairs(A, B);

    cout << res;

    return 0;
}