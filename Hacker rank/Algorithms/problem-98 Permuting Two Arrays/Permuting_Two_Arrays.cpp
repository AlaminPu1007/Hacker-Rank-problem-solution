#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string twoArrays(int k, vector<int> A, vector<int> B)
    {
        int len_A = A.size(), len_B = B.size();
        sort(A.begin(), A.end());
        sort(B.begin(), B.end(), greater<int>());

        for (int i = 0; i < len_A; i++)
        {
            if (A[i] + B[i] < k)
                return "NO";
        }

        return "YES";
    }
};

int main(void)
{
    Solution obj;
    vector<int> A = {1, 2, 2, 1};
    vector<int> B = {3, 3, 3, 4};
    obj.twoArrays(5, A, B);
    return 0;
}