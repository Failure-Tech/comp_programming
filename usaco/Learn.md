# USACO Guide / Competitive Programming Learn Doc

## Prefix Sums
### 1. Breed Counting
- Able to get the idea relatively quickly, simple because after converting the three arrays, you can find number of elements between a range pretty quickly
- **Idea:** using prefix sum with size N+1 instead of N was new to use
- Make sure to not make any syntax errors (here I made cin >> N >> Q as cin >> N, Q )
  
### 2. Subsequences Summing To 7
- Taking prefix sum, and everything mod 7 I was able to figure out relatively quickly
- Tricky part was an efficient way to calculate the biggest sequence without going through every pair, so O(n) instead of O(n^2)
- Needed solution, but idea was to create a vector that tracks whenever the first index of a specific remainder shows up, so set everything to negative 1, and whenever you find a new remainder, you can add it to the array, and otherwise you can find the sequence length and return maximum directly like that

### 3. Hoof Paper Scissors
- Idea was to simply just compute the prefix sum individually for Hoof, Paper, Scissors
- Afterwards, just go through every possible turning point, and compute the max before turning point at index i and afterwards
- Pretty much like hoof[i] and then say hoof[N] - hoof[i] for a possible change (also accounts for no change theoretically)
- **Issue:** I was overcomplicating the problem, kept trying to use a singular winning subarr instead of splitting it
  
### 5. Good Subarrays
- Idea was, after computing prefix sum, you can rewrite the equation of P[r] - P[l] = r - l as P[r] - r = P[l] - l
- From this, you can make a map, and search through all possible pairings with the same amount of the prefix subtracted from the index
- Choosing two of those, your answer then just sums over it, and becomes n(n-1)/2 for all pairings
- **Issue:** did not rewrite it out mathematically, which could have helped a lot more instead of trying to bash
  
### 6. Why Did the Cow Cross the Road II
- Idea was to fill in the regular array of size N with 0, and then take in the broken indicies and change those values to 1
- Prefixing that array, you can find the number of broken signals in a contiguous sub array by simply subtracting the endpoints of given size K, and I did just that
- **Note:** Make sure your indicies are all correct, as I was first initially wrong because of that

## Binary Search
### 3. Angry Cows
- Idea was to use binary search on the answer to find the minimum radius value
- First sort the array, and then for a given R, find whether you can blow up all haybales or not
- For the function to find whether you can, first find the range and current haybales that explode
- Then, set the next cow to explode to our current haybale explosion + a given radius is optimal, then use binary search for optimal radius
- **Note:** Application for binary search will be for the answer, the hard part is the solution for the other portions of a given problem (here it was finding whether you can blow up all haybales)

### 1. Factory Machines - General
- Idea was to simply use binary search to find optimal time T, and then use a function to calculate
- To calculate, just find sum the floor for our current time T and find the sum by taking floor(T/machines[i])
- **Note:** Make sure to read problem conditions carefully about variable sizes and such