# Sales by Match
https://www.hackerrank.com/challenges/sock-merchant/problem

* Problem: *
There is a large pile of socks that must be paired by color.<br>
Given an array of integers representing the color of each sock,<br>
determine how many pairs of socks with matching colors there are.<br>

Sample Input:
9 --> array size
                          
10 20 20 10 10 30 50 10 20 

Sample Output:
3

* Explanation: *
If we count the even number of pairs from our total pairs, that will be the solution of this problem.<br>

there is " 10 = 4 " present 4 times.<br>
20 present 3 times.<br>

after count each digit frequency, <br>
just used this approach,  

	div = value / 2;
        if(div)
        {
          count += div;
          div = 0;
        }



