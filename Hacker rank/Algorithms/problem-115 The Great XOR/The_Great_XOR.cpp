
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
  public:
  long theGreatXor(long num)
  {
      long count = 0;
      long i = 0;
      while(num != 0)
      {
          //get binary of num, and check it's bit is equal to 0 after dividing it's by 2
          if((num&1) == 0)
          {
              count += pow(2, i);
          }
          
          i++;
        //   divide by 2
        num = num >> 1; //is equal to num /= 2; 
      }
        
      return count;
  }
};

int main()
{
   Solution obj;
   long ans = obj.theGreatXor(10);
   
   cout<<ans<<endl;

   return 0;
}