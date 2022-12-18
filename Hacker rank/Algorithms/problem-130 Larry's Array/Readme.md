## Larry's Array

[Visit problem](https://www.hackerrank.com/challenges/larrys-array/problem)

**Approach :**<br>

-   Loop through `i = 0  to len-1`
-   Loop through `j = i + 1 to len - 1`
-   if A[i] > A[j] increment counter value by `1`, and so on
-   if counter is event then return "YES" else "NO"

-   **Complexity Analysis :**<br>
-   Time-Complexity: `O(n^n)`
-   Space-Complexity: `O(1)`
