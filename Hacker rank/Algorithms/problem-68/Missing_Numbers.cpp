#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution
{
public:
    vector<int> missingNumbers(vector<int> arr, vector<int> brr)
    {
        map<int, int> Map;
        vector<int> result;
        int arr_len = arr.size(), brr_len = brr.size(), i;

        for (i = 0; i < arr_len; i++)
            Map[arr[i]]++;

        for (i = 0; i < brr_len; i++)
            Map[brr[i]]--;

        for (auto item : Map)
            if (item.second < 0)
                result.push_back(item.first);

        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {203, 204, 205, 206, 207, 208, 203, 204, 205, 206}, brr = {203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204};
    obj.missingNumbers(arr, brr);

    return 0;
}