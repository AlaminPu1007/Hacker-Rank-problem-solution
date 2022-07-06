#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int howManyGames(int p, int d, int m, int s)
    {
        // Return the number of games you can buy
        long long i, count = 0, sum = p;

        while (p >= m)
        {
            p = p - d;

            if (p <= m)
                p = m;

            if (sum <= s)
            {
                count++;
                sum += p;
            }
            else
                break;
        }
        cout << count << endl;

        return count;
    }
};

int main(void)
{
    Solution obj;
    int p = 20, d = 87, m = 31, s = 9702;
    obj.howManyGames(20, 3, 6, 70);
    return 0;
}