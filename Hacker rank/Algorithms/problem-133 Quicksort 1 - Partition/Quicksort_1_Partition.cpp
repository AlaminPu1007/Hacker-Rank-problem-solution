#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> quickSort(vector<int> arr)
    {
        int len = arr.size();
        vector<int> res;

        int root = arr[0];

        for (int i = 0; i < len; i++)
        {
            // push left value
            if (root > arr[i])
            {
                res.push_back(arr[i]);
            }
        }

        for (int i = 0; i < len; i++)
        {
            // for equal value
            if (root == arr[i])
            {
                res.push_back(arr[i]);
            }
        }

        for (int i = 0; i < len; i++)
        {
            // for greater value
            if (root < arr[i])
            {
                res.push_back(arr[i]);
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {4, 5, 3, 7, 2};
    vector<int> res = obj.quickSort(arr);

    cout << "Result : " << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}