
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int flippingMatrix(vector<vector<int>> matrix)
    {
        int sum = 0;
        int n = matrix.size() / 2;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
                sum += max(max(matrix[i][j], matrix[i][2 * n - 1 - j]), max(matrix[2 * n - 1 - i][j], matrix[2 * n - 1 - i][2 * n - 1 - j]));
        }
        return sum;
    }
};

int main(void)
{
    Solution obj;
    vector<vector<int>> matrix = {{112, 42, 83, 119}, {56, 125, 56, 49}, {15, 78, 101, 43}, {62, 98, 114, 108}};
    int res = obj.flippingMatrix(matrix);
    cout << res << endl;
    return 0;
}