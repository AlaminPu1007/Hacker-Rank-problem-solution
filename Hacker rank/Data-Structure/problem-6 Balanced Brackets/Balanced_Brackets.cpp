#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string isBalanced(string s)
    {
        int len = s.length();
        int top = -1, c = 0;
        char stack[len];

        for (int i = 0; i < len; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stack[++top] = s[i];
            }
            else
            {
                if (top == -1)
                    return "NO";

                if ((s[i] == ')' && stack[top] == '(') || (s[i] == ']' && stack[top] == '[') || (s[i] == '}' && stack[top] == '{'))
                {
                    top--;
                }

                else
                    return "NO";
            }
        }

        return top == -1 ? "YES" : "NO";
    }
};

int main(void)
{
    Solution obj;
    string ans = obj.isBalanced("{[(])}");
    cout << ans << endl;
    return 0;
}