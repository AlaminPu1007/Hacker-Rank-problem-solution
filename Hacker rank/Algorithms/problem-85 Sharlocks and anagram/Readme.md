# Sherlock and Anagrams

Problem link: https://www.hackerrank.com/challenges/sherlock-and-anagrams/problem

**Approach :**<br>
First we have to find out all possible way of substring from given string.<br>

```
for i = 1 to string_len - 1
for j = 0 to string_len - 1 - i
// we get sub string from j to i. ex: j = 1, i = 3 for string "aageb", we get "age"
// where j = start position and i = length
subString = string.substr(j, i)

//sort subString
 sort(subString.begin(), subString.end())
 // make an key value pairs with hash table
 Map[subString]++;

```

Then, loop through Map and multiply its value with value-1 and then divide it by 2.

```
for auto item of Map
ans += item.second * item.second / 2
```

finally return the ans

```
return ans
```

**Complexity analysis :**<br>
Time-Complexity : O(n^2)
Space-Complexity : O(n)

**References :**<br>

- learn more substring: https://www.tutorialspoint.com/substring-in-cplusplus
