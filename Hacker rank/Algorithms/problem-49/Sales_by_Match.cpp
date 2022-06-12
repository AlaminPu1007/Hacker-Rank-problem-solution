#include <string.h>
#include <iostream>
#include <iterator>
#include <map>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(void)
{
    // define map
    map <int, int> Objects;
    //declare vector for array
    vector<int>arr;
    int i, count = 0, j, n, value, div = 0;

    cin>>n;

    for(i = 0; i < n; i++)
    {
        cin >> value;
        arr.push_back(value);
    }

    // count key pairs with their value
     for_each( arr.begin(), arr.end(), [&Objects]( int val )
     { Objects[val]++; } );
    // print vector value

   for(auto item: Objects)
    {
        div = item.second / 2;
        if(div)
        {
          count += div;
          div = 0;
        }
    }

    cout<<count<<endl;

    return 0;
}
