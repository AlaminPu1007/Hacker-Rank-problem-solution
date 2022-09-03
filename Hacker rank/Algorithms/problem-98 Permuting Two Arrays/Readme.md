# Permuting Two Arrays

Problem link: https://www.hackerrank.com/challenges/two-arrays/problem

**Approach :**<br>

- Sort Array "A" ascending order
- Sort Array "B" descending order
- loop through first array and check A[i] + B[i] < k, return NO
- return YES

**Complexity :**<br>
Time-Complexity: O(n.log(n))<br>
Space-complexity: O(1)<br>
