
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int beautifulTriplets(int d, vector<int> arr)
    {

        int count = 0, len = arr.size();

        for (int i = 0; i < len; i++)
        {
            int nextElement = arr[i] + d, res = 1;
            for (int j = i + 1; j < len; j++)
            {
                if (nextElement == arr[j])
                {
                    res++;
                    nextElement += d;
                    if (res >= 3)
                    {
                        count++;
                        break;
                    }
                }
            }
        }
        return count;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 2, 3, 4, 5};
    obj.beautifulTriplets(1, arr);

    return 0;
}