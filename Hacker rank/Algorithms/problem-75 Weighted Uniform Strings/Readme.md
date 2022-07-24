# Weighted Uniform Strings

problem link: https://www.hackerrank.com/challenges/weighted-uniform-string/problem

**Approach :**<br>

First we have to count each character weight, and insert it to value(which is a set).<bt>
Then loop through the queries array, and check each querie of element is present inside our Values or not.<br>
it it is true, return Yes else return No.<br>

for size_t i = 0, j to i < len; i = j <br>
//make an copy of each character<br>
copy_char := s[i] <br>
//initialize weight with 0<br>
char_weight := 0 <be>

//nested loop, to check repeating character <br>
//ex: aaa -> for this input j will loop through 0 to 2 <br>

for j = i, to j < len && s[j] == copy_char, ++j<br>

//copy_char - 'a' + 1 -> from this approach we get each character weight<br>
// converting it to integer, <br>

char_weight := char_weight + copy_char - 'a' + 1 <br>
// then push it to set <br>
values.insert(char_weight) <br>

for size_t i = 0 to queries_len <br>
cout << values.find(queries[i]) == values.end() ? "No" : "Yes")<br>

**Complexity :**<br>
//nested loop will be iterate until finish repeating each character<br>
// it can be present n time.<br>
T.C : O(n^2)

//we used an extra set array, to put each character weight<br>
S.C : O(n)

**Reference**<br>

Lear more about SET: https://www.geeksforgeeks.org/set-in-cpp-stl/<br>

Learn more about size_t: https://pvs-studio.com/en/blog/posts/cpp/a0050/#:~:text=size_t%20type%20is%20a%20base,64%2Dbit%20one%2064%20bits.<br>
