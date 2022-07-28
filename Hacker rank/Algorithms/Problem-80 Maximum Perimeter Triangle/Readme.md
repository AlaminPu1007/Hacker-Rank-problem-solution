# Maximum Perimeter Triangle

Problem link: https://www.hackerrank.com/challenges/maximum-perimeter-triangle/problem

**Approach :**<br>
The law of triangle: <br>
if a, b, and c are the lengths of the sides, the following is always true: a + b > c && b + c > a && c + a > b The law of triangle: <br>
So, the trick is that, first we made sort of entire array of element, then start loop through back forward.<br>

if c + b > a, we just return it true,else print - 1<br>
