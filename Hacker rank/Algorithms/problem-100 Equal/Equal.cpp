#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Finds # of operations to take away n chocolates from one person
    int numOps(int n)
    {
        int result = 0;
        result += n / 5;
        n %= 5;
        result += n / 2;
        n %= 2;
        result += n;
        return result;
    }
    // Equal method called here
    int equal(vector<int> arr)
    {
        int len = arr.size(), min = INT_MAX;
        int answer = INT_MAX;
        for (int i = 0; i < len; i++)
        {
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }

        // Iterate over the list and try reducing everyone's candies
        // down to {min, min-1, min-2, min-3, min-4}. Take the minimum
        // answer.
        for (int i = 0; i < 4; i++)
        {
            int tempAnswer = 0;
            for (int j = 0; j < len; j++)
            {
                tempAnswer += numOps(arr[j] - min + i);
            }

            if (tempAnswer < answer)
                answer = tempAnswer;
        }

        return answer;
    };
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 2, 3, 7};
    int res = obj.equal(arr);
    return 0;
}