# Making Anagrams
https://www.hackerrank.com/challenges/making-anagrams/problem?isFullScreen=false <br>

In this problem,  both strings must contain the same exact letters in the same exact frequency.<br>
For example, "bacdc" and "dcbac" are anagrams, but "bacdc" and "dcbad" are not. <br>

lets discuss about our solution: <br/>

first by this method, we count the requency of first given string of each character.<br>

     for(i = 0; str[i] != '\0'; i++)<br>
     freq[str[i] - 'a']++;<br>

second method, we subtract the given string each character value by -1.<br>

	for(i = 0; str[i] != '\0'; i++)
        freq[str[i] - 'a']--;

from this two approach, the same exact letters in the same exact frequency will be zero(0).<br>
if we are count each frequency of each remain character, this will be the our actual result.</br>

abs()<--> its from #include <math.h>, it return with all positive value.<br>

	for(i = 0; i < 26; i++)
        {
            if(freq[i] != 0)
            {
               result += abs(freq[i]);
            }
        }

