## Balanced Brackets

[Visit problem](https://www.hackerrank.com/challenges/balanced-brackets/problem)

**Approach :**<br>
To solve this issue we need to implementation of stack(data structure).<br>
First, push all the open parentheses inside our stack array and keep track of last pushed element by top value.<br>
The initial value of top := -1. <br>

After pushing all open parentheses, check each close parentheses with last pushed value into our stack.<br>
If the close parentheses and open parentheses are same, decrease top := top - 1, and so no. <br>

**Complexity :**<br>
T.C : O(N)<br>
S.C: O(N) // by using new stack array.<br>
