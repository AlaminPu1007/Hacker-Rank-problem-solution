# Modified kaprekar Numbers

problem link: https://www.hackerrank.com/challenges/kaprekar-numbers/problem

**Approach :**<br>

- loop from p to q
- for each i convert `(p * p)` into string
- covert sub-string into integer using atoi() predefine method of c++, and store them in constant variable(assume it's name value)
- if value == p, print them, ans so on

**Complexity :**<br>
Time-Complexity :O(n)<br>
Space-Complexity :O(1)<br>

**References :**<br>

- learn about atoi()-> method https://www.geeksforgeeks.org/write-your-own-atoi/
- lear c_str() -> https://www.geeksforgeeks.org/basic_string-c_str-function-in-c-stl/
