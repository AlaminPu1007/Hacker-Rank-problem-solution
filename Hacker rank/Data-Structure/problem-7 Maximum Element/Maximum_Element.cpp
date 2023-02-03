#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> getMax(vector<string> operations)
    {
        int len = operations.size();
        vector<int> new_value, max_value;
        for (auto item : operations)
        {
            string copy_str = item;
            // 1 mean insert into queue
            if (copy_str[0] == '1')
            {
                int get_value = stoi(copy_str.substr(2));
                new_value.push_back(get_value);
            }
            // 2 means pop element
            else if (copy_str[0] == '2')
            {
                new_value.pop_back();
            }
            else if (copy_str[0] == '3')
            {
                int maxItem = 0;
                for (int i = 0; i < new_value.size(); i++)
                {
                    maxItem = max(maxItem, new_value[i]);
                }
                max_value.push_back(maxItem);
            }
        }
        return max_value;
    }
};
int main(void)
{
    Solution obj;
    vector<string> operations = {"1 97", "2", "1 20"};
    vector<int> res = obj.getMax(operations);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    return 0;
}