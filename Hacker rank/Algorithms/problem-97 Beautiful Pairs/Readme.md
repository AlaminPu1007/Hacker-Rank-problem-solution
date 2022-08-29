# Beautiful Pairs

Problem link: https://www.hackerrank.com/challenges/beautiful-pairs/problem

**Approach :**<br>
Count first array each element frequency by using Hash-Map<br>
Then loop through second array and check matching element, after find it, increase count variable by 1, and decrement frequency of found element, and so on<br>

if count value is equal to first array length, then return count - 1<br>
else return count + 1<br>

**Complexity :**<br>
Time-Complexity: O(n)<br>
Space-Complexity: O(n)<br>
