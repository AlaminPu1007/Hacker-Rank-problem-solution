#include <bits/stdc++.h>
using namespace std;

/*
    Our own comparator function,
    This “comparator” function returns a value; convertible to bool, which basically tells us whether the passed “first” argument should be placed before the passed “second” argument or not. 
*/
 bool cmp(string left, string right) {
     if (left.length() == right.length()) return left < right;
     else return left.length() < right.length();     
}


int main(void)
{
    vector<string>unsorted;
    int n;
    string value;
    
    cin>>n;
    //get string from user
    for(int i = 0; i < n; i++)
    {
        cin>>value;
        unsorted.push_back(value);
    }
    // sort array of string, 
    sort(unsorted.begin(), unsorted.end(), cmp);
        
    for(int i = 0; i < unsorted.size(); i++)
    cout<<unsorted[i]<<endl;
    
    
    return 0;
}