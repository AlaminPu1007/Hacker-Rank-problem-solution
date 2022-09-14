
#include <bits/stdc++.h>
using namespace std;

class Solution
{
  public:
      string biggerIsGreater(string w) {
        int len = w.length(), target1 = -1, target2 = -1;
        
        for(int i = len-1; i>=0; i--)
        {
            if(w[i] - 'a' > w[i-1] - 'a')
            {
                target1 = i - 1;
                break;
            }
        }
        
        if(target1 == - 1)
        return "no answer";
        
        for(int i = len-1; i >= 0; i--)
        {
            if(w[i]-'a' > w[target1]-'a')
            {
                target2 = i;
                break;
            }
        }
        
        swap(w[target1], w[target2]);
        reverse(w.begin()+target1+1, w.end());
        
        return w;
     }
};

int main(void)
{
    Solution obj;
    string w = "fedcbabcd";
    obj.biggerIsGreater(w);
    return 0;
}