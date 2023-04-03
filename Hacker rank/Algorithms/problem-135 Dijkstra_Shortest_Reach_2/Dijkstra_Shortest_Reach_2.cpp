#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    typedef pair<int, int> iPair;
    vector<int> shortestReach(int n, vector<vector<int>> edges, int s)
    {
        vector<int> dist(n + 1, INT_MAX);
        vector<iPair> adj[n + 1];
        vector<int> vis(n + 1, 0);

        // priority_queue<iPair, vector<iPair>, greater<iPair>> pq;
        set<iPair> st;

        // making an adjacency list
        for (auto item : edges)
        {
            adj[item[0]].push_back({item[1], item[2]});
            adj[item[1]].push_back({item[0], item[2]});
        }

        // for (int i = 0; i < n; i++)
        // {
        //     cout << "node " << i << "-> ";
        //     for (auto item : adj[i])
        //     {
        //         cout << item.first << " " << item.second << endl;
        //     }
        //     cout << endl;
        // }

        // cout << endl
        //      << endl;

        // put source node with distance 0
        dist[s] = 0;
        st.insert({0, s});

        while (!st.empty())
        {
            auto it = *(st.begin());
            int node = it.second;
            int distance = it.first;

            st.erase(it);

            if (vis[node])
                continue;

            vis[node] = 1;

            for (auto item : adj[node])
            {
                if (item.second + distance < dist[item.first])
                {
                    dist[item.first] = item.second + distance;
                    st.insert({item.second + distance, item.first});
                }
            }
        }

        for (int i = 0; i <= n; i++)
            if (dist[i] == INT_MAX)
                dist[i] = -1;

        vector<int> ans;

        for (int i = 1; i <= n; i++)
            if (i != s)
                ans.push_back(dist[i]);

        return ans;
    }
};

int main(void)
{
    Solution obj;
    int n = 5, s = 2;
    vector<vector<int>> edges = {{1, 2, 10}, {1, 3, 6}, {2, 4, 8}};
    vector<int> res = obj.shortestReach(n, edges, s);
    cout << "Result is : ";
    for (auto item : res)
        cout << item << " ";

    return 0;
}