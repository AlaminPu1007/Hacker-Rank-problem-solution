#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> countingSort(vector<int> arr)
    {
        int len = arr.size();
        vector<int> freq(100, 0);

        for (int i = 0; i < len; i++)
            freq[arr[i]]++;

        return freq;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 1, 3, 2, 1};
    obj.countingSort(arr);
    return 0;
}