#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> climbingLeaderboard(vector<int> ranked, vector<int> player)
    {
        // set<int> rank;
        vector<int> result;
        map<int, int> Map;

        int rank_len = ranked.size(), player_len = player.size();

        // sort and descending order
        sort(ranked.begin(), ranked.end(), greater<int>());

        int copy_len = 1;

        for (int i = 0; i < rank_len; i++)
        {

            auto item = Map.find(ranked[i]);
            if (item != Map.end())
                Map[ranked[i]] = item->second;

            else
            {
                Map[ranked[i]] = copy_len++;
            }
        }

        for (int i = 0; i < player_len; i++)
        {
            auto item = Map.upper_bound(player[i]);
            result.push_back(item->second + 1);
        }

        return result;
    }
};

int main(void)
{
    Solution obj;
    vector<int> ranked = {100, 100, 50, 40, 40, 20, 10}, player = {5, 25, 50, 120};
    vector<int> res = obj.climbingLeaderboard(ranked, player);

    for (int i = 0; i < res.size(); i++)
        cout << res[i] << " ";
    return 0;
}