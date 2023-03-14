## Flatland Space Stations

[Visit Problem](https://www.hackerrank.com/challenges/flatland-space-stations/problem?isFullScreen=false)

**Approach :**<br/>
In the flatlandSpaceStations function, we first sort the indices of the space stations in ascending order. If all cities have a space station, the maximum distance is 0, so we return it. Otherwise, we calculate the maximum distance from the first and last city to their nearest station. Then, we iterate over the sorted station indices to calculate the maximum distance between two adjacent stations. Finally, we return the maximum of all distances calculated.

**Complexity Analysis :**<br/>

-   Time-Complexity: `O(n*log(n))` // sorting array
-   Space-Complexity: `O(1)`
