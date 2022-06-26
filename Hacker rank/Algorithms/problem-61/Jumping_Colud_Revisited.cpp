#include <iostream>
#include <vector>

using namespace std;

class Solution
{
  public:
  
  int Jumping_Clouds(vector<int>&nums, int k, int n)
  {
      int energy = 100, i = 0;
      
      while(true)
      {
          i = (i + k) % n;
          
          if(nums[i] == 1)
          energy -= 3;
          
          else energy -= 1;
          
          if(i == 0)
          break;
      }
      
      return energy;
  }
};

int main(void)
{
    Solution obj;
    vector <int> arr;
    int value, n, i, k;
    // get input from usre for array size and k
    cin>>n>>k;
    for(i = 0; i < n; i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    
    int res = obj.Jumping_Clouds(arr, k, n);
    
    cout<<res<<" "<<endl;
    
    return 0;
}
