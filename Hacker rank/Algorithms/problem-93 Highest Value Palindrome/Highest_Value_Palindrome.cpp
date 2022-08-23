
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string highestValuePalindrome(string s, int n, int k)
    {

        int count = 0;
        // count how many miss-matching character are present their
        for (int i = 0; i < n / 2; i++)
            if (s[i] != s[n - i - 1])
                count++;
        // if count is grater than k
        if (count > k)
        {
            return "-1";
        }

        for (int i = 0; i < n / 2; i++)
        {
            if (s[i] != s[n - i - 1])
            {
                if (max(s[i], s[n - i - 1]) == '9')
                {
                    s[i] = s[n - i - 1] = '9';
                    k--;
                    count--;
                }
                else if (k > count)
                {
                    s[i] = s[n - i - 1] = '9';
                    k -= 2;
                    count--;
                }

                else
                {
                    s[i] = s[n - i - 1] = max(s[i], s[n - i - 1]);
                    k--;
                    count--;
                }
            }
            else
            {
                if (max(s[i], s[n - i - 1]) == '9')
                    continue;

                else if (k > count + 1)
                {
                    s[i] = s[n - i - 1] = '9';
                    k -= 2;
                }
            }
        }

        if (k && n % 2 == 1)
            s[n / 2] = '9';
        return s;
    }
};

int main(void)
{
    Solution obj;
    string str = "3943";
    string res = obj.highestValuePalindrome(str, 4, 3);

    cout << res << " " << endl;
    return 0;
}