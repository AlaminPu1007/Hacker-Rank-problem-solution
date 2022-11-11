## Largest Permutation

[Visit problem](https://www.hackerrank.com/challenges/largest-permutation/problem)

**Approach :**<br>
we need an extra array to store each item current index from array.`(we called ite copy_array)`<br>

Then loop through reverse array and check current array item is equal to `i`(looping value)<br>
if it's not then make an copy of current array value value `temp := arr[current]` where current initial value `0`<br>
Update array current item with the larger item from array by using swap method<br>

```
  swap(arr[current], arr[item[i]]);
```

And we need to also update `item_array(we use item as it's name)` by current array item with largest item from `copy_array`<br>

**Complexity :**<br>

-   Time-Complexity: `O(n)`
-   Space-Complexity: `O(n)`
