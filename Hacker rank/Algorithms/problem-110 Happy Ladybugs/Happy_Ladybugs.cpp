#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string happyLadybugs(string b)
    {
        int len = b.size(), arr[26] = {0};
        int underscore = 0;

        for (int i = 0; i < len; i++)
        {
            if (b[i] >= 'A' && b[i] <= 'Z')
                arr[b[i] - 'A']++;
            else
                underscore++;
        }
        // if any of character frequency is 1, then return 1,cause it has no possibility
        for (int i = 0; i < 26; i++)
            if (arr[i] == 1)
                return "NO";

        if (!underscore)
        {
            for (int i = 1; i < len - 1; i++)
                if ((b[i] != b[i - 1]) && (b[i] != b[i + 1]))
                    return "NO";
        }
        return "YES";
    }
};

int main(void)
{
    Solution obj;
    string str = "AABBC";
    string res = obj.happyLadybugs(str);
    cout << res << endl;
}