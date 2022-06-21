
# The Love-Letter Mystery

**Problem Link:**
https://www.hackerrank.com/challenges/the-love-letter-mystery/problem?isFullScreen=false

**Solution**

We have to find the minimum number of operations required to convert a given string into a palindrome.<br>

**Approach**

To solve this problem we need to get help from ascii value of each character.<br>
Later we run loop from i = 0, to get access each character at their initial (o to string length)<br>
and j is for reverse order. Each time we chek first character with last character.<br>

if(str[i] != str[j] <br>
we subtract str[i] - str[j], and get diference of each iteration, and put it inside of integer data type variable.<br>

This will be our result.<br>

# Happy Coding