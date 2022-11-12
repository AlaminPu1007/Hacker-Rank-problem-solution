## Alice and Bob's Silly Game

[Open problem](https://www.hackerrank.com/challenges/alice-and-bobs-silly-game/problem)

**Approach :**<br>
[Learn sieve-of-eratosthenes algorithm to get efficiency way](https://www.geeksforgeeks.org/sieve-of-eratosthenes/)<br>

-   The solution of this problem is that, we have to find out list of total prime number till n
-   and count how many prime number till `n`
-   if `count % 2 == 0 return "Bob" else return "Alice"`

**Complexity Analysis :**<br>

-   Time-Complexity: `O(sqrt(n) * sqrt(m))` approximately
-   Space-Complexity: `O(n)` -> we used an extra bool array
