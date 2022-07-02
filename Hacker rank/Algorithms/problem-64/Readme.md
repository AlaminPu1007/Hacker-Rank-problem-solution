# Between Two Sets

https://www.hackerrank.com/challenges/between-two-sets/problem

**Problem :**
There will be two arrays of integers. Determine all integers that satisfy the following two conditions: <br>

The elements of the first array are all factors of the integer being considered<br>
The integer being considered is a factor of all elements of the second array<br>

**Solution :**

for i = 1 to 100 <br>
bool flag := true <br>

for k = 0 to firstArray_len <br>
if(i % firstArray[i] != 0) <br>
flag := false <br>

for j = 0 to secondArray_len <br>
if(secondArray[j] % i != 0) <br>
flag := false <br>

if(flag) <br>
result := result + 1 <br>

return result <br>
