# Sherlock and the Valid String

Problem link: https://www.hackerrank.com/challenges/sherlock-and-valid-string/problem

**Problem :**<br><br>
Sherlock considers a string to be valid if all characters of the string appear the same number of times. It is also <br>valid if he can remove just 1 character at 1 index in the string, and the remaining characters will occur the same <br>number of times. Given a string s, determine if it is valid. If so, return YES, otherwise return NO.<br>

**Approach :**<br><br>
First we need to count each character frequency with const freq[26] array.<br>
Then make a flag to get first value from freq[26] array and copy that value.<br>

Now, each time compare with, (flag == 1 && freq[i] != copyValue), with increment counter by 1.<br>

if count <= 1, return "YES"<br>
else return "NO" <br>
