
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
    string gridChallenge(vector<string> grid) {
        
        int len = grid.size();
        //sort string
        for(int i = 0; i < len; i++)
        sort(grid[i].begin(), grid[i].end());
        
        // i --> indicate will be row
        // j --> indicate will be column
        for(int j = 0; j < len; j++)
        {
            for(int i = 0; i < len - 1 ; i++)
            {
                if(grid[i][j] > grid[i + 1][j])
               return "NO";
            }
        }
        
        return "YES";
    }
};

int main(void)
{
    Solution obj;
    vector<string>str = {"ebacd", "fghij", "olmkn", "trpqs", "xywuv"};
    
    string res = obj.gridChallenge(str);
    
    cout<<res<<endl;
    
    return 0;
}