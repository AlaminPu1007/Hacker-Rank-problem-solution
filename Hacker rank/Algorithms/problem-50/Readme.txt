# Equalize the Array
https://www.hackerrank.com/challenges/equality-in-a-array/problem?h_r=profile

* Problem :

Given an array of integers, determine the minimum number of elements to delete to leave only elements of equal value.<br>

Sample Input :

5  <--> arr[] size n = 5

3 3 2 1 3  

Sample Output :

2

Explanation: 

After counting frequency of each digit, first we count how many single frequency is there<br>
if there is no duplicate frequency present, we just print " total_element_length - 1 " <br>

   for(auto item: Objects)
    {
        if(item.second == 1) {
            count++;
        }
        if(max < item.second) max = item.second;
    }

else, subtract max matching pair from our actual array length <br>

  if(count == n)
     {
         cout<< count - 1<<endl;
     }
     else {
      cout<< n - max<<endl;    
     }


