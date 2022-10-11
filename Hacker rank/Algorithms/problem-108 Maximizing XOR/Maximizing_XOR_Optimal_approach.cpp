#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    int maximizingXor(int l, int r) {
        
        int result = 1, n = l ^ r;
        while(n)
        {
            result <<= 1; // it will multiply with 2
            n >>= 1; // it will divide by 2
        }
        
        return result - 1;
    }
};

int main(void)
{
    Solution obj;
    int res = obj.maximizingXor(11,12);
    cout<<res;
    return 0;
}