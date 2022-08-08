#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int sherlockAndAnagrams(string s) {
        
        map<string,int>Map;
        
        int len = s.length();
        
        for(int i = 1; i < len; i++)
        {
            for(int j = 0; j <= len - i; j++)
            {
                string value = s.substr(j, i);
                sort(value.begin(), value.end());
                
                Map[value]++;
            }
        }
        
        long long int ans = 0;
        
        for(auto item: Map)
        {
            ans += (long long)(item.second * (item.second - 1) / 2);
        }
        return ans;
    }
};

int main(void)
{
    Solution obj;
    string str = "ifailuhkqq";
    obj.sherlockAndAnagrams(str);
    return 0;
}