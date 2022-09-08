# Flipping the Matrix

Problem link: https://www.hackerrank.com/challenges/flipping-the-matrix/problem

**Problem :**<br>
Sean invented a game involving a matrix where each cell of the matrix contains an integer. He can reverse any of its rows or columns any number of times. The goal of the game is to maximize the sum of the elements in the submatrix located in the upper-left quadrant of the matrix.<br>

Given the initial configurations for matrices, help Sean reverse the rows and columns of each matrix in the best possible way so that the sum of the elements in the matrix's upper-left quadrant is maximal.<br>

**Approach :**<br>
We have to find out, the maximize sum of the elements in the sub-matrix located in the upper-left quadrant of the matrix.<br>

```
n := len/2;
for  i := 0 to n-1
      for j := 0 to n-1
        sum += max(max(matrix[i][j], matrix[i][2 * n - 1 - j]), max(matrix[2 * n - 1 - i][j], matrix[2 * n - 1 - i][2 * n - 1 - j]))
return sum
```

**Complexity :**<br>
Time-Complexity: O(n^2)<br>
Space-Complexity: O(1)<br>
