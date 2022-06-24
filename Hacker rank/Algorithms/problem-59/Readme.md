# Picking Numbers

https://www.hackerrank.com/challenges/picking-numbers/copy-from/275824927

**Solution:**

First, we have to count each value frequency,with arrValue<br>

	for (i = 0; i < n; i++)
        {
            cin >> value;
            arrValue[value]++;
        }
Then, we have to check, current index value to next item index value, is grater than max or not.<br>
if its true, change max value with this two element summition value.<br>

	for (i = 0; i < n - 1; i++)
        {
            if (arrValue[i] + arrValue[i + 1] > max)
                max = arrValue[i] + arrValue[i + 1];
        }
cout<<max;

Print the result.<br>