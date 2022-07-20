# Closest Numbers

https://www.hackerrank.com/challenges/closest-numbers/problem

**Problem :**<br>
Sorting is useful as the first step in many different tasks. The most common task is to make finding things easier, <br>but there are other uses as well. In this case, it will make it easier to determine which pair or pairs of<br> elements have the smallest absolute difference between them<br>

**Approach :**<br>
First we need to sort the array, then find out the minimum value after Subtraction (arr[i] - arr[i + 1]).<br>
Then,<br>
for i = 0 to arr_length<br>
sub := abs(arr[i] - arr[i + 1]) <br>
if sub == min <br>
then,<br>
res.push_back(arr[i])<br>
res.push_back(arr[i + 1])<br>
