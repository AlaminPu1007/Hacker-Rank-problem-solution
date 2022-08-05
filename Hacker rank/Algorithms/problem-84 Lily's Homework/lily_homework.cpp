#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    
int lilysHomework(vector<int> arr) {
        
        int len = arr.size(), szI = 0, szD = 0;
        map<int,int>forWard, backWard;
        vector<int>asc_arr = arr, des_arr = arr;
        //copy an existing array
        vector<int> arr2 = arr;
        
        //sort array with ascending order
        sort(asc_arr.begin(), asc_arr.end());
        //sort array with descending order
        sort(des_arr.begin(), des_arr.end(),greater<int>());
        
        for(int i = 0; i < len; i++)
        {
            forWard[asc_arr[i]] = i;
            backWard[des_arr[i]] = i;
        }
        // for ascending order
        for(int i = 0; i < len; i++)
        {
            if(arr[i] != asc_arr[i])
            {
                swap(arr[i], arr[forWard[arr[i]]]);
                szI++;
                i--;
            }
        }
        
        // for descending order
        for(int i = 0; i < len; i++)
        {
            if(arr2[i] != des_arr[i])
            {
                swap(arr2[i], arr2[backWard[arr2[i]]]);
                szD++;
                i--;
            }
        }
        
        return min(szI, szD);
    }   
};

int main(void)
{
    Solution obj;
    vector<int> arr = {2, 5, 3, 1};
    obj.lilysHomework(arr);
    return 0;
}