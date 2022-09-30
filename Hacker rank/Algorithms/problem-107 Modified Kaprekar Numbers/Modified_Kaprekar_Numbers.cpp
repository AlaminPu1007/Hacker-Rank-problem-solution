#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void kaprekarNumbers(int p, int q)
    {
        bool flag = false;

        for (int i = p; i <= q; i++)
        {
            string s = to_string((long)i * long(i));
            int sub = s.size() / 2;

            int value = atoi(s.substr(0, sub).c_str()) + atoi(s.substr(sub, s.size()).c_str());
            if (!flag && value == i)
                flag = true;

            if (value == i)
                cout << value << " ";
        }

        if (!flag)
            cout << "INVALID RANGE" << endl;
        return;
    }
};

int main(void)
{
    Solution obj;
    obj.kaprekarNumbers(1, 100);
    return 0;
}