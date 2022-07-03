# Minimum Loss

https://www.hackerrank.com/challenges/minimum-loss/problem

**Problem :**
Lauren has a chart of distinct projected prices for a house over the next several years. She must buy the house in one <br>
year and sell it in another, and she must do so at a loss. She wants to minimize her financial loss.<br>

**Example :**

price = [20 7 8 2 5] <br>

result : 7 - 5 = 2 <br>

**Approach :**

    for i = 0 to price_len <br>
    //make a key value pairs by vector  <br>
      prices.push_back(make_pair(price[i], i))  <br>

    // Sort those array of element  <br>
    sort(prices.begin(), prices.end()) <br>

    for i = 0 to price_len - 1 <br>

    key := prices[i + 1].first - prices[i].first <br>

    if (min > key && prices[i].second > prices[i + 1].second) <br>
    min := prices[i].second > prices[i + 1].second <br>

    return min<br>
