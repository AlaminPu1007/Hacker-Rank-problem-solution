# Maximizing XOR

Problem link: https://www.hackerrank.com/challenges/maximizing-xor/problem

**Approach-1, brute force:**<br>

- loop through i = l to r+1
- loop through j = i to r+1
- get res = max(res, i^j)
- return res

**Approach-2, Optimal:**<br>

- loop through n != 0
- multiply each value with 2, by left shifting, result <<= 1
- divided each value by 2, by right shifting, n >>= 1;

**Complexity of Approach-1:**<br>
Time-Complexity:O(n^2)<br>
Space-Complexity: O(1)<br>

**Complexity of Approach-1:**<br>
Time-Complexity:O(log(n)) //we are going to divide by n with 2, for each iteration<br>
Space-Complexity: O(1)<br>
