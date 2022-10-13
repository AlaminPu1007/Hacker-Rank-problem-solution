## Counter game

**Problem link:**<br>
[`you can find problem link here`](https://www.hackerrank.com/challenges/counter-game/problem)

**Approach :**<br>

- each time we need to check, the number is power of 2 or not by & operator
  [learn more] (https://stackoverflow.com/questions/64605039/how-does-the-formula-x-x-1-works)
- if not, get power of 2 value by `k := log(n)` and subtract it, and push it to the root number.`n := n - pow(2,k)`
- for each iteration, increment counter value by 1
- finally return, if `counter % 2 == 0` "Louise" else "Richard"

**Complexity :**<br>

- Time-Complexity: `O(log(n))` // each time n is divide by 2
- Space-Complexity: `O(1)` // we are not using any kind of extra space
