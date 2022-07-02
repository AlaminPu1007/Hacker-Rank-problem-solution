#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int getTotalX(vector<int> a, vector<int> b)
    {
        int i, j, k, result = 0, a_len = a.size(), b_len = b.size();

        for (int x = 1; x <= 100; x++)
        {
            bool flag = true;
            for (i = 0; i < a_len; i++)
                if (x % a[i] != 0)
                    flag = false;
            for (j = 0; j < b_len; j++)
                if (b[j] % x != 0)
                    flag = false;
            if (flag)
                result++;
        }

        return result;
    }
};

int main(void)
{
    Solution obj;

    vector<int> a, b;
    // vector<int> a = {2, 4}, b = {16, 32, 96};
    int n, m;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        a.push_back(value);
    }

    for (int i = 0; i < m; i++)
    {
        int value;
        cin >> value;
        b.push_back(value);
    }

    int res = obj.getTotalX(a, b);
    cout << res << endl;
    return 0;
}
