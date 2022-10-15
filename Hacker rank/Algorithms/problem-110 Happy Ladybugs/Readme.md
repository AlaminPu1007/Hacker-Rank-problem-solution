## Happy Ladybug

[problem link](https://www.hackerrank.com/challenges/happy-ladybugs/problem)

**Approach :**<br>
loop through i := 0 to len-1,<br>
make an frequency of each character, arr[b[i]-'A']++, and else increment underscore value by 1<br>
Then, loop through i := 0 to 26, const no of time, and check any character frequency is equal to 1, if it's then return no<br>

Now check underscore is remain 0 or not, if it's,<br>
loop through i := 1 to len-2<br>

```
    if ((b[i] != b[i - 1]) && (b[i] != b[i + 1]))
        return "NO";
```

finally return "YES", if any of them is not true<br>

**Complexity :**<br>

- Time-Complexity: `o(n)`
- Space-Complexity: `O(1)`
