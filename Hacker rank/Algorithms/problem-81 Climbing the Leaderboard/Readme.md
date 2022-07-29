# Climbing the Leader-board

Problem link: https://www.hackerrank.com/challenges/climbing-the-leaderboard/problem

**Approach ::**<br>
First, we have to make an key value pairs of ranked array, using has table.<br>

for i := 0 to rank_len-1 <br>
//find item is already present in our map or not<br>
auto item := Map.find(ranked[i]) <br>
//if its present<br>
if (item != Map.end()) <br>
Map[ranked[i]] := item->second <br>

else <br>
Map[ranked[i]] := copy_len++ <br>

Then, loop through player array and for each element find out its upper-bound value from existing hash-map table.<br>

for i := 0 to player_len-1 <br>
auto item := Map.upper_bound(player[i])<br>
//push in new vector array<br>
result.push_back(item->second + 1)<br>
