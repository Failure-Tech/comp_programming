#include <bits/stdc++.h>
using namespace std;

int binarySearch(int n, vector<int>& arr, int target) {
    int a = 0, b = n-1;

    while (a <= b) {
        int mid = a + (b-a)/2; // a + (b-a)/2 = a-a/2 + b/2 = a/2 + b/2 = (a+b)/2
        if (arr[mid] == target) {
            return mid + 1;
        }
        if (arr[mid] > target) {
            b = mid -1;
        } else {
            a = mid + 1;
        }
    }
}