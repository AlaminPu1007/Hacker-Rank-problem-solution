#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maximizingXor(int l, int r) {
        int result = 0;
        for(int i = l; i <= r; i++)
            for(int j = i; j <=r; j++)
                result = max(result, i ^ j);
        
        return result;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.maximizingXor(11,12);
    cout<<res;
    return 0;
}