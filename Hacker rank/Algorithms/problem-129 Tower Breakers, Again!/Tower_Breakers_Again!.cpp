#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int OddPrime(int num)
    {
        int count = 0;
        if (num % 2 == 0)
            count++;
        while (num % 2 == 0)
        {
            num /= 2;
        }
        for (int i = 3; i <= sqrt(num); i++)
        {
            while (num % i == 0)
            {
                num /= i;
                if (i % 2 != 0)
                    count++;
            }
        }
        if (num > 2)
            count++;
        return count;
    }
    int towerBreakers(vector<int> arr)
    {
        int len = arr.size();
        long long int ans = 0;
        for (int i = 0; i < len; i++)
        {
            ans ^= OddPrime(arr[i]);
        }

        if (ans != 0)
            return 1;
        else
            return 2;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {1, 2, 3};
    int res = obj.towerBreakers(arr);
    cout << res << endl;
    return 0;
}