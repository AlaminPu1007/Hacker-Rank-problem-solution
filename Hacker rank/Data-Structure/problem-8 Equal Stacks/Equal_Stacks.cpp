#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int equalStacks(vector<int> h1, vector<int> h2, vector<int> h3)
    {
        int sum1 = 0, sum2 = 0, sum3 = 0;
        // count each array summation by accumulate
        // https://www.tutorialspoint.com/array-sum-in-cplusplus-stl
        sum1 = accumulate(h1.begin(), h1.end(), sum1);
        sum2 = accumulate(h2.begin(), h2.end(), sum2);
        sum3 = accumulate(h3.begin(), h3.end(), sum3);

        int i1 = 0, i2 = 0, i3 = 0;
        // until, the height of the stacks when they are equalized
        while ((sum1 != sum2) || (sum1 != sum3) || (sum3 != sum2))
        {

            if (sum1 >= sum2 && sum1 >= sum3)
            {
                sum1 -= h1[i1];
                i1++;
            }
            else if (sum2 >= sum1 && sum2 >= sum3)
            {
                sum2 -= h2[i2];
                i2++;
            }
            else if (sum3 >= sum1 && sum3 >= sum2)
            {
                sum3 -= h3[i3];
                i3++;
            }
        }

        return sum1;
    };
};

int main(void)
{
    Solution obj;
    vector<int> arr1 = {3, 2, 1, 1, 1}, arr2 = {4, 3, 2}, arr3 = {1, 1, 4, 1};
    int res = obj.equalStacks(arr1, arr2, arr3);
    cout << res << endl;
    return 0;
}