#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        // Root-Value-> 0 1 3 0 4 1 7 8
        // after-xor -> 0 1 2 2 6 7 0 0 // this pattern will remain same after all value
        long soln(long number)
        {
            int n = number % 8;
            if(n == 0 || n == 1)
                return number;
            else if(n == 2 || n == 3)
                return 2;
            else if(n == 4 || n == 5)
                return number + 2;
            else return 0;
        };
        long xorSequence(long l, long r) {

            return soln(r) ^ soln(l-1);
            
        }
};

int main(void)
{
    Solution obj;

    long res = obj.xorSequence(2,4);
    cout<<res<<endl;
    return 0;
}