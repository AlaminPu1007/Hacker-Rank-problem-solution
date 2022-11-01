## The Great XOR

[Problem-link](https://www.hackerrank.com/challenges/the-great-xor/problem)

**Approach :**<br>

- we have find out which value is greater than `num` after xor it with `1 to num`
- The optimize solution is that, after convert `num&1` binary after each iteration `num divided by 2`, we need to check the bit is equal to `0`
- if it's then `pow(2, i), where initial value of `i = 0` and it will be increase after each iteration, so on

**Complexity :**<br>

- Time-Complexity: `O(log(n))` // each iteration we divided `num by 2`
- Space-Complexity: `O(1)` //we are not using any kind of extra space
