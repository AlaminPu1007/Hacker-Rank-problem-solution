#Max Min

Problem link: https://www.hackerrank.com/challenges/angry-children/problem

**Approach :**<br>
First sort our array of element.<br>

```
for i = 0 to array_len - k
// array index start from 0, thats why (k - 1)
value := arr[i + k - 1] - arr[i]
if value < min then min := value

//finally return min

return min
```

**Complexity analysis :**<br>
Time-Complexity : O(n log(n))<br>
Space-Complexity : O(1)<br>
