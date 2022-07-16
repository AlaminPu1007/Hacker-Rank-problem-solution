
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string isValid(string s)
    {

        int len = s.length(), freq[26] = {0}, copyValue = 0, count = 0, flag = 0;

        // count each character frequency
        for (int i = 0; i < len; i++)
            freq[s[i] - 'a']++;

        for (int i = 0; i < 26; i++)
        {
            if (freq[i])
            {
                if (flag == 0)
                {
                    copyValue = freq[i];
                    flag = 1;
                }
                // count
                if (flag == 1 && freq[i] != copyValue)
                    count++;
            }
        }

        if (count <= 1)
            return "YES";

        return "NO";
    }
};

int main(void)
{
    Solution obj;
    string str = "abccc";

    string res = obj.isValid(str);
    cout << res;
    return 0;
}