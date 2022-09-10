# Greedy Florist

Problem link: https://www.hackerrank.com/challenges/greedy-florist/problem

**Approach :**<br>

- First we need sort our array with descending order
- Then, loop through array len-1, and count cost

```
for  i := 0 to len-1
    cost += (1 + i / k) * c[i]
```

- finally return cost

**Complexity :**<br>
Time-Complexity: O(n.log(n))//for sorting array<br>
Space-Complexity: O(n)<br>
