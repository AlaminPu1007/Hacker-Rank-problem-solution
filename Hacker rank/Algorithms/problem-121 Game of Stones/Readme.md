Ga,e pf stones
[Open the problem](https://www.hackerrank.com/challenges/game-of-stones-1/problem)

**Approach :**<br>
For `n=0` and `n=1`, The second player wins because the first player can't make a move. For `n=2,3,4,5,6` the first player win because in each case, they can remove enough stones so the second player can't make a move. This pattern repeats itself every `7` stones. The case of `n=7` is equivalent to `n=2,4`, or `5` but with the second player as the one who do the first move. In all those cases the second player can win. The case of `n=8` is equivalent to `n=3,5, or 6`. And again the second player will win. For `n=9`, the first player can take out `2` stones and go back to the case of `7` stones but with the second player making the first move -> The first player will win. And so on... <br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(1)`
-   Space-Complexity: `O(1)`
