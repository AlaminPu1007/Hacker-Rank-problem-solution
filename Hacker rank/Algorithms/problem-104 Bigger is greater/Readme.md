# Bigger-is-greater

Problem link: https://www.hackerrank.com/challenges/bigger-is-greater/problem

**Approach :**<br>
We have to find out first character which one is less than, after starting loop in reverse order.<br>
Then, store minimum character position inside another integer variable and break the loop.<br>

```
 for i = len-1 to 0
    if w[i] - 'a' > w[i-1] - 'a'
      target1 = i - 1
      break
```

If, target1 contain it's initial value, then return no answer<br>

else,
Now, we have to find-out next character for performing swap operation with previous found character<br>
We have to find-out a character which one is greater than to previous founded character<br>

```
 for i = len-1 to 0
    if w[i] - 'a' > w[target1] - 'a'
      target2 = i
      break
```

Swap, target1 position with target2 position charter<br>

```
swap(w[target1, target2])
```

and also need to reverse last portion of string, after target1 position.<br>

```
reverse(w.begin()+target1+1, w.end())
return w
```

**Complexity :**<br>
Time-Complexity : O(n)<br>
Space-Complexity : O(1)<br>
