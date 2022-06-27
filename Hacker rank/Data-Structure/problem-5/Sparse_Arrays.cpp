#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Solution
{
public:
    /** submitted main logic start here */

    vector<int> matchingStrings(vector<string> strings, vector<string> queries)
    {
        int arr_n = strings.size(), qer_n = queries.size();
        map<string, int> Map;
        vector<int> num;

        int i;

        for (i = 0; i < arr_n; i++)
        {
            Map[strings[i]]++;
        }

        for (i = 0; i < qer_n; i++)
        {
            auto item = Map.find(queries[i]);
            if (item != Map.end())
            {
                num.push_back(item->second);
            }
            else
                num.push_back(0);
        }
        return num;
    }
    /** submitted main logic end here */
};

int main(void)
{
    Solution obj;
    int arr_n, qer_n, i;
    string value;

    cin >> arr_n >> qer_n;

    vector<string> arr, qer;

    for (i = 0; i < arr_n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }
    for (i = 0; i < qer_n; i++)
    {

        cin >> value;
        qer.push_back(value);
    }

    vector<int> res = obj.matchingStrings(arr, qer);

    for (auto item : res)
        cout << item << endl;

    return 0;
}
