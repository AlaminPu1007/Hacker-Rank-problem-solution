## Nimble Game

[Open Problem](https://www.hackerrank.com/challenges/nimble-game-1/problem)

**Approach :**<br>

-   we need xor each `item % 2 == 1` with `counter`(initialize with 0)
-   after xor we need to check `sum == 0` or not
-   if sum is present then `return First` else `return Second`

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(1)`

**References :**<br>
[Learn about Nim game](https://en.wikipedia.org/wiki/Nim)
