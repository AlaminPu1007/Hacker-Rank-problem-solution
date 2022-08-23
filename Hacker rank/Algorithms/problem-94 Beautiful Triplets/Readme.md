# Beautiful Triplets

Problem link: https://www.hackerrank.com/challenges/beautiful-triplets/problem

**Approach :**<br>

- loop through array element, and sum of its each element with value of d(which variable name is nextElement)
  // by making an nextElement, it will reduce one extra loop<br>
- then again run nested loop and check nextElement is equal to each nested element
- if it's true then increment a (result) variable by one and update nextElement variable by 'd' value
- if result is value is grater than or equal to 3, just increment counter by 1(this our actual result)
- and so on...

**Complexity :**<br>
Time-Complexity: O(n^2)<br>
Space-Complexity: O(1)<br>
