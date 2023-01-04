## Two Characters

[Visit Problem](https://www.hackerrank.com/challenges/two-characters/problem)

**Approach :**<br>

first you loop through every combination of 2 letters that are in the string `(a and b)`, then you create a new string that contains only the occurrences of the 2 current letters. `(e.g. 'beabeefeab' with a, b = ('b', 'e') -> 'bebeeeb')` then you can check if there are two of the same letters in a row in that string `(e.g.: 'bb' in 'bebeeeb': False, 'ee' in 'bebeeeb': True)` if it is then the string is invalid and we just continue, if it is not `(e.g. ('b', 'a') -> 'babab')` then the string is valid, so take the length of the string and compare it to the currently longest string.<br>

**Complexity Analysis :**<br>

-   Time-Complexity: `O(n^3)`, 26(for first loop) _ 26 (for second loop) _ n(third loop where iterate over the string)
-   Space-Complexity: `O(1)`
