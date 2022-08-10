# Candies

Problem link: https://www.hackerrank.com/challenges/candies/problem

**Approach :**<br>

- first we have to initialize all candies with 1

```
for i = 0 to n-1
 Candies[i] := 1;
```

- now distribute candies to the right

```
        for  i = 1 to n-1

            if arr[i] > arr[i - 1]
                Candies[i] += Candies[i - 1]

```

-Then distribute candies to the left, with reverse order

```
        for  i = n - 2 to i >= 0

            // This time, we need to consider max{candies[i], candies[i+1]+1}
            // since we don't know whether the ascending or descending trend is larger
            if arr[i] > arr[i + 1] and Candies[i] < Candies[i + 1] + 1
                Candies[i] := Candies[i + 1] + 1
```

- now count the candies

```
for  i = 0 to  n-1
  result += Candies[i]
```

- finally return the result

```
return result
```

**Complexity-analysis::**<br>

- Time-Complexity: O(n)
  // we used an extra candies dynamic to store our candies
- Space-Complexity: O(n)
