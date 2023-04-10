#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> iPair;

class Solution
{
public:
    vector<int> bfs(int n, int m, vector<vector<int>> edges, int s)
    {
        vector<int> adj[n + 1];
        vector<int> dist(n + 1, INT_MAX);
        priority_queue<iPair, vector<iPair>, greater<iPair>> q;

        for (auto item : edges)
        {
            adj[item[0]].push_back({item[1]});
            adj[item[1]].push_back({item[0]});
        }

        dist[s] = 0;
        q.push({0, s});

        while (!q.empty())
        {
            int node = q.top().second;
            int distance = q.top().first;
            q.pop();

            for (auto item : adj[node])
            {
                if (distance + 6 < dist[item])
                {
                    dist[item] = distance + 6;
                    q.push({distance + 6, item});
                }
            }
        }
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            if (i != s && dist[i] == INT_MAX)
            {
                dist[i] = -1;
                ans.push_back(-1);
            }
            else if(i != s)
                ans.push_back(dist[i]);
        }

        return ans;
    }
};

int main(void)
{
    Solution obj;
    int n = 5, m = 3, s = 1;
    vector<vector<int>> arr = {{1, 2}, {1, 3}, {3, 4}};
    vector<int> res = obj.bfs(n, m, arr, s);
    for (auto item : res)
        cout << item << " ";
    return 0;
}