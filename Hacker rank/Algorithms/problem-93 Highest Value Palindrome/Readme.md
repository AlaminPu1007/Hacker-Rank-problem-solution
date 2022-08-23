# Highest Value Palindrome

Problem link: https://www.hackerrank.com/challenges/richie-rich/problem

**Approach :**<br>

- First we have to count how many miss-match character are there, by counter variable
- if counter is grater than k, thats mean the given string is not going to be palindrome
- The main login describe here by writing sudo code

```
#Start loop
    for i = 0 to  n / 2
            #start main if
            if s[i] != s[n - i - 1]
                #start if
                if max(s[i], s[n - i - 1]) == '9'

                    s[i] := s[n - i - 1] := '9';
                    k--
                    count--
                #end if

                #start else if
                else if k > count

                    s[i] := s[n - i - 1] := '9';
                    k -= 2
                    count--
                #end else if

                #start else
                else

                    s[i] = s[n - i - 1] = max(s[i], s[n - i - 1]);
                    k--;
                    count--;
                #end else

            #end main if

            #start else
             else
                #start if
                if (max(s[i], s[n - i - 1]) == '9')
                    continue;

                #start else if
                else if k > count + 1

                    s[i] := s[n - i - 1] := '9'
                    k -= 2

            # end else
#End of loop

if k && n % 2 == 1
   s[n / 2] := '9'

  return s;
```
