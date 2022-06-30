
# Anagram

https://www.hackerrank.com/challenges/anagram/problem

** Problem : **

Two words are anagrams of one another if their letters can be rearranged to form the other word.<br>
Given a string, split it into two contiguous substrings of equal length. <br>
Determine the minimum number of characters to change to make the two substrings into anagrams of one another.<br>

** Solution : **
first we have to make, tow part of string, and string length must be even number.<br>

div := string_len / 2 <br>

for i := 0 to string != '\0'(untill get null)<br>

if i < div <br>
increment each word frequency<br>

else <br>
decrement each word frequency <br>

Then, count the value which has less than 0<br>

