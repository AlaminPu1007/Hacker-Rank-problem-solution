# Gemstones
https://www.hackerrank.com/challenges/gem-stones/problem?isFullScreen=false

Problem: 
Given a list of string, we have to find out the similar character that occur inside of each string.<br>

Sample Input: <br>

STDIN       Function <br>
-----       -------- <br>
3           arr[] size n = 3 <br>
ab <br>
ab <br>
a <br>

Sample Output: <br>
1

Explanation: <br>

Only a occur in every rock.<br>

Solution : <br>

we need a 2D array to count each string frequency. Then we push each string frequency (1) inside our freq[100][100] array.<br>

freq[i][ch] = 1; // we put 1, for given character <br>

now, we have to count the same occur character from our freq array.<br>

  for(i = 0; i < 26; i++)
    {
        count = 0;
        for(j = 0; j < n; j++)
        {
            if(freq[j][i])
            {
                count++;
            }

        }

        if(count == n)
        {
            result++;
        }
    }

From given code,first we part each string character. ex: n = 3 (three string of character), it will print each string first character.<br>

from our given sample input, our three string first character is 'a', for this, we get count = 1;<br>




