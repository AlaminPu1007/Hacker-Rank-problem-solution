# Counting Sort 2

problem link: https://www.hackerrank.com/challenges/countingsort2/problem

**Approach :**<br>

- count each digit frequency with key value pairs using hash-table
- loop through hash-map, and put value inside new constant variable and iterate on it until it's become to zero, also push key inside new vector array, so on

**Complexity :**<br>

- Time-Complexity: O(n.m)//where n = hash-map size , m = hash map value size
- Space-Complexity: O(n)

**Complexity using_library :**<br>

- Time-Complexity: O(n.log(n))
- Space-Complexity: O(1)
