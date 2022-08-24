
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int palindromeIndex(string s)
    {

        int len = s.length();
        int i = 0, j = len - 1;

        while (i < j)
        {
            if (s[i] != s[j])
                break;

            i++;
            j--;
        }

        // if string is already palindrome
        if (i >= j)
            return -1;

        // delete one specific character to make an string palindrome
        int a = i + 1, b = j;

        while (a <= b)
        {
            if (s[a] != s[b])
                return j;

            a++;
            b--;
        }
        return i;
    }
};

int main(void)
{
    Solution obj;
    string s = "abaa";
    obj.palindromeIndex(s);
    return 0;
}