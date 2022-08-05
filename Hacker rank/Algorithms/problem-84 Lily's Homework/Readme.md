# Lily's Homework

Problem link: https://www.hackerrank.com/challenges/lilys-homework/problem

**Approach :**<br>
//sort array with ascending order<br>
sort(asc_arr.begin(), asc_arr.end())<br>
//sort array with descending order<br>
sort(des_arr.begin(), des_arr.end(),greater<int>())<br>

Make an key value pairs with hash map <br>
for i = 0 to len - 1 <br>
forWard[asc_arr[i]] = i <br>
backWard[des_arr[i]] = i <br>

Swap by ascending order<br>

for i = 0 to len - 1<br>

if(arr[i] != asc_arr[i])<br>
swap(arr[i], arr[forWard[arr[i]]])<br>
szI++<br>
i--<br>

Swap by descending order<br>

for i = 0 to len - 1<br>
f(arr2[i] != des_arr[i]) <br>
swap(arr2[i], arr2[backWard[arr2[i]]])<br>
szD++<br>
i--<br>

return min(szI, szD)
