#include <bits/stdc++.h>
using namespace std;

long getAns(long *Arr, int ind, int buy, int n) {
    // Base case: When we reach the end of the array, there are no more decisions to make.
    if (ind == n) {
        return 0;
    }

    // If the result for this state has already been calculated, return it
  

    long profit = 0;

    if (buy == 0) { // We can buy the stock
        profit = max(0 + getAns(Arr, ind + 1, 0, n), -Arr[ind] + getAns(Arr, ind + 1, 1, n));
    }

    if (buy == 1) { // We can sell the stock
        profit = max(0 + getAns(Arr, ind + 1, 1, n), Arr[ind] + getAns(Arr, ind + 1, 0, n));
    }

    // Store the calculated profit in the DP table and return it
    return  profit;
}

// long getMaximumProfit(long *Arr, int n) {
//     // Create a DP table to memoize results


//     if (n == 0) {
//         return 0;
//     }


//     return ans;
// }

int main() {
    int n = 9;
    long Arr[n] = {7, 1, 5, 3, 6, 4, 8, 2, 10};

    // Call the getMaximumProfit function and print the result
    long ans = getAns(Arr, 0, 0, n);
    cout << "The maximum profit that can be generated is " << ans;

    return 0;
}