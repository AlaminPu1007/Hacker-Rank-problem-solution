## Almost Sorted

[Open Problem](https://www.hackerrank.com/challenges/almost-sorted/problem)

**Approach :**<br>

-   sort copy arr
-   identifying the left and right indices,
-   trying to swap arr[left] with arr[right]
-   To Check, whether the swap operation can return an sorted array or not
-   if the swap operation cannot return the sorted array, then trying to reverse from left to right;

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n*log(n))`
-   Space-Complexity: `O(n)`
