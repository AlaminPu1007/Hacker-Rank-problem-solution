# String Construction
https://www.hackerrank.com/challenges/string-construction/problem?isFullScreen=false

problem-explanation:

For each string 's[i]'  print the minimum cost of constructing a new string 'p[i]' on a new line.

Sample Input

2
abcd
abab
Sample Output

4
2

solution:

	for(i = 0; str[i] != '\0'; i++)
        {
            freq[str[i] - 'a']++;
        }

first we have to count the frequency of given string,<br>

	for(i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            count++;
        }

we have to count how many frequency is there, this will be the result of this problem.



