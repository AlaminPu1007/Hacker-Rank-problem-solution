# Missing Numbers

https://www.hackerrank.com/challenges/missing-numbers/problem

**Problem :**
Given two arrays of integers, find which elements in the second array are missing from the first array.<br>

**Approach :**

for i = 0 to arr_len
Map[arr[i]]++; // count each item frequency, with key value pairs

for i = 0 to brr_len
Map[brr[i]]--; // decrement each item frequency from previous item

for auto item: Map
if := item.second < 0 // item.second --> value pairs form map
push item.key into new vector array ;

return newArray;
