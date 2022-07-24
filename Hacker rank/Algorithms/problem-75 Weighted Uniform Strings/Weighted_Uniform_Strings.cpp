#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    vector<long long int> queries;
    // Sets are a type of associative containers in which each element
    // has to be unique because the value of the element identifies it
     set<int> values;
    
    int value = 0, n;
    
    //get string from user
    cin>>s;
    
    long int len = s.length();

    // size_t type is a base unsigned integer type of C/C++ language. 
    // It is the type of the result returned by sizeof operator. 
    
    for (size_t i = 0, j; i < len; i = j)
    {
        char copy_char = s[i];
        int char_weight = 0;
        
        for (j = i; j < len && s[j] == copy_char; ++j) {
            char_weight += copy_char - 'a' + 1;
            values.insert(char_weight);
        }
    }
    
    //get queries length
    cin >> n;
    
    for(size_t i = 0; i < n; i++) {
        cin >> value;
        cout << (values.find(value) == values.end() ? "No" : "Yes") <<endl;
    }

    return 0;
}
