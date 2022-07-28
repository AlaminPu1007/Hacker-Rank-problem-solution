#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, value;
    vector<int> arr;
    
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>value;
        arr.push_back(value);
    }
    
        int len = arr.size();
        for(int i = 1; i < len; i++)
        {
            int copy_value = arr[i];
            int j = i - 1;
            
            while(j >= 0 && arr[j] > copy_value)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            arr[j + 1] = copy_value;
            // 
            for(int i = 0; i < len; i++)
            cout<<arr[i]<<" ";
            
            cout<<endl;
        };
    
    return 0;
}