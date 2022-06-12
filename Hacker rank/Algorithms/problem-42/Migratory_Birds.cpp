#include <string.h>  
#include <iostream>  
#include <iterator>
#include <map>
#include <stdio.h>
#include <algorithm>
#include <vector>

using namespace std;


int main() {
    // define vector (array with dynamic size)
    vector<int> arr;
    // define map 
    map<int, int>Map;
    int n, i, sum = 0, value;
    //take array size
    cin>>n;
    
    for(i = 0; i < n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }
    
    // make key value pairs with vector and map
    //for_each --> is from algorithm header
    // this approach helps us to make key value pairs with duplicate element, 
    //with their frequency
    for_each(arr.begin(), arr.end(), [&Map](int item) {Map[item]++;});
    
    int max = 0, key = 0;
    
    for(auto item: Map)
    {
        if(max < item.second)
        {
            max = item.second;
            key = item.first;
        }
    }
    
    cout<<key<<endl; 

    return 0;
}
