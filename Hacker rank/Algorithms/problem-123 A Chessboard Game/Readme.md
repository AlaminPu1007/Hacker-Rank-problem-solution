## A Chessboard Game

[Open problem](https://www.hackerrank.com/challenges/a-chessboard-game-1/problem)

**Approach :**<br>

```
 return ((x / 2) % 2 == 0 && (y / 2) % 2 == 0) ? "Second" : "First";
 after subtract x,y by one
```

**Complexity Analysis :**<br>

-   Time-Complexity: `O(1)`
-   Space-Complexity: `O(1)`
