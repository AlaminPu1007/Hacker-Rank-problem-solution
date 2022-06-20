#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Solution {
  public:
  void CutSticks(int* arr, int n)
  {
      
    sort(arr, arr + n);
    
    cout<<n<<endl;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] != arr[i - 1])
        {
            cout<<n-i<<endl;
        }
    }
    
  }
};

int main() {
   Solution obj;
   int arr[1000], n;
   
   scanf("%d", &n);
   
   for(int i = 0; i < n; i++)
   cin>>arr[i];
   
   obj.CutSticks(arr, n);

    return 0;
}
