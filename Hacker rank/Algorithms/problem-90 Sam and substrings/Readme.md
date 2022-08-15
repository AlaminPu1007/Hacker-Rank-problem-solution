# Sam and substring

Problem link: https://www.hackerrank.com/challenges/sam-and-substrings/problem

**Approach :**<br>

```
for  i = 0 to string_len - 1
cov_int = string[i] - '0;
 temp := ((temp * 10) + (i + 1) * cov_int) % mod;
      result := (result + temp) % mod;

finally return
return result
```

**Complexity :**<br>
Time-complexity: O(n)<br>
Space-Complexity: O(1)<br>
