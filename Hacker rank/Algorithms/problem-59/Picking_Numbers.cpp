#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <iterator>

using namespace std;

class Solution
{
public:
    void PICKING_NUMBERS()
    {
        int i, count = 0, value, n, max = 0;

        int arrValue[100] = { 0 };

        cin >> n;

        // push value inside out vector
        for (i = 0; i < n; i++)
        {
            cin >> value;
            arrValue[value]++;
        }

        for (i = 0; i < n - 1; i++)
        {
            // cout << arrValue[i] << endl;
            if (arrValue[i] + arrValue[i + 1] > max)
                max = arrValue[i] + arrValue[i + 1];
        }

        cout << max << endl;
    }
};

int main(void)
{
    Solution obj;
    obj.PICKING_NUMBERS();

    return 0;
}
