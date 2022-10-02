#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string isFibo(long n)
    {
        map<long long, int> Map;
        long long int first = 0;
        long long int second = 1;
        long long int value = 0;

        while (1)
        {
            value = first + second;
            if (value > 10000000000LL)
                break;

            Map[value] = 1;

            first = second;
            second = value;
        }

        if (Map[n])
            return "IsFibo";

        return "IsNotFibo";
    }
};

int main(void)
{
    Solution obj;
    obj.isFibo(8);
    return 0;
}