#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void minimumBribes(vector<int> q)
    {
        int counter = 0, len = q.size();

        int first_value = 1;
        int second_value = 2;
        int third_value = 3;

        for (long long int i = 0; i < len; ++i)
        {
            if (q[i] == first_value)
            {
                first_value = second_value;
                second_value = third_value;
                ++third_value;
            }
            else if (q[i] == second_value)
            {
                ++counter;
                second_value = third_value;
                ++third_value;
            }
            else if (q[i] == third_value)
            {
                counter += 2;
                ++third_value;
            }
            else
            {
                cout << "Too chaotic" << endl;
                return;
            }
        }

        cout << counter << endl;
    }
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 5, 1, 3, 4};
    obj.minimumBribes(arr);
    return 0;
}