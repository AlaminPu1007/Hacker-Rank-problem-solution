# Find the Median

https://www.hackerrank.com/challenges/find-the-median/problem

**Problem :**
The median of a list of numbers is essentially its middle element after sorting. <br>

**Approach :**
First Check array size event or not, if its even, return -1 <br>

Then need to sort our array. then get the median of this array, and return it.<br>

    sort(arr.begin(), arr.end());

    int div = (len / 2);

    return arr[div];
