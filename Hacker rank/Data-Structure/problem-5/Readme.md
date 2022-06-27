# Sparse Arrays
https://www.hackerrank.com/challenges/sparse-arrays/problem?isFullScreen=false

**Problem :**
There is a collection of input strings and a collection of query strings. <br>
For each query string, determine how many times it occurs in the list of input strings.<br>


**Approach :**

We need to help of c++ map library, with this library, we have to first count each string frequency(how many times a string is present"<br>

	for (i = 0; i < arr_n; i++)
        {
            Map[strings[i]]++;
        }
Then, each query to check it is present inside our map or not. if its present, then push its value inside num(which is vector--dynamic array)<br>
else put 0.

	for (i = 0; i < qer_n; i++)
        {
            auto item = Map.find(queries[i]);
            if (item != Map.end())
            {
                num.push_back(item->second);
            }
            else
                num.push_back(0);
        }

Finally return num.

# Happy - coding

