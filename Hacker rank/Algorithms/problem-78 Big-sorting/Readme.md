# Big Sorting

problem link: https://www.hackerrank.com/challenges/big-sorting/problem

**Approach :**<br>

We have to use c++ sort predefined method.<br>
// sort array of string, <br>
sort(unsorted.begin(), unsorted.end(), cmp) <br>

/_
Our own comparator function,
This “comparator” function returns a value; convertible to bool, which basically tells us whether the passed “first” argument should be placed before the passed “second” argument or not.
_/

bool cmp(string left, string right) <br>
if (left.length() == right.length()) return left < right<br>
else return left.length() < right.length()<br>
