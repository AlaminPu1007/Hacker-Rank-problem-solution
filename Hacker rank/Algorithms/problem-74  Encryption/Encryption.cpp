#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;

    int len = s.length();
    float root = sqrt(len);
    int col = ceil(root);
    int row = (int)(root);

    for (int i = 0; i < col; i++)
    {
        for (int j = i; j < len; j = j + col)
            cout << s[j];

        cout << " ";
    }
    return 0;
}
