#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long candies(int n, vector<int> arr)
    {
        long long result = 0;
        // It declares a pointer to a dynamic array of type long long and size n
        long long *Candies = new long long[n];

        // initialize all candies with 1
        for (long long int i = 0; i < n; i++)
            Candies[i] = 1;

        // distribute candies to the right
        for (long long int i = 1; i < n; i++)
        {
            if (arr[i] > arr[i - 1])
                Candies[i] += Candies[i - 1];
        }

        // distribute candies to the left
        for (long long int i = n - 2; i >= 0; i--)
        {
            // This time, we need to consider max{candies[i], candies[i+1]+1}
            // since we don't know whether the ascending or descending trend is larger
            if (arr[i] > arr[i + 1] && Candies[i] < Candies[i + 1] + 1)
                Candies[i] = Candies[i + 1] + 1;
        }

        for (long long i = 0; i < n; i++)
        {
            result += Candies[i];
        }

        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 4, 3, 5, 2, 6, 4, 5};
    long long res = obj.candies(8, arr);
    cout << res << endl;
    return 0;
}