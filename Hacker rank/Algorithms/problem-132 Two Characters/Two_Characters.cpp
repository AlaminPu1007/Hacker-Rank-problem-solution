#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int alternate(string s)
    {
        int len = s.size(), res = 0;
        bool valid;
        char last;

        int frq[26] = {0};

        for (int i = 0; i < len; i++)
        {
            frq[s[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (frq[i] == 0)
                continue;

            for (int j = i + 1; j < 26; j++)
            {
                if (frq[j] == 0)
                    continue;

                last = -1;
                valid = true;

                for (int k = 0; k < len; k++)
                {
                    char i_char = i + 'a';
                    char j_char = j + 'a';

                    if (s[k] == i_char || s[k] == j_char)
                    {
                        if (last == s[k])
                        {
                            valid = false;
                            break;
                        }
                        last = s[k];
                    }
                }

                // update res
                if (valid && abs(frq[i] - frq[j]) <= 1)
                {
                    res = max(res, frq[i] + frq[j]);
                }
            }
        }

        return res;
    }
};

int main(void)
{
    Solution obj;
    string str = "beabeefeab";
    int res = obj.alternate(str);
    cout << res << " ";
    return 0;
}
