# Non-Divisible Subset

Problem link:https://www.hackerrank.com/challenges/non-divisible-subset/problem

**Approach :**<br>

1. put reminder value in new array freq array(s[i] % k)<br>
2. if (k % 2 is even), then update freq[k / 2] := with min(freq[k / 2], 1)<br>
3. if freq[0] is value then update result := 1<br>
   Then, <br>
   for i = 1 to k/2<br>
   //update result with maximum value form freq[i] and freq[k - i]<br>
   max(freq[i], freq[k - i])<br>

   **Complexity :**<br>
   T.C: O(n)<br>
   S.C: O(n) // we declare an new freq[] array<br>
