#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string sillyGame(int n)
    {
        int prime[100001] = {0};
        for (int i = 2; i * i <= n; i++)
        {
            // check for i is already marked or not
            if (prime[i] == 0)
            {
                // Update all multiples of i greater than or
                // equal to the square of it numbers which are
                // multiple of i and are less than i^2 are
                // already been marked.
                for (int j = i * i; j <= n; j += i)
                {
                    prime[j] = 1;
                }
            }
        }

        int count = 0;

        for (int i = 2; i <= n; i++)
            if (prime[i] == 0)
                count++;

        if (count % 2 == 0)
        {
            return "Bob";
        }
        else
        {
            return "Alice";
        }
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.sillyGame(50);
    cout << ans << endl;
    return 0;
}