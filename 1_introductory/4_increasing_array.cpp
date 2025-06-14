/*
    Given an array arr[] of size N, you want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element. On each move, you may increase the value of any element by one. Find the minimum number of moves required.

    Examples:

    Input: N = 5, arr[] = {3, 2, 5, 1, 7}
    Output: 5
    Explanation: 

    Increase arr[1] by 1, so arr[] becomes {3, 3, 5, 1, 7}.
    Increase arr[3] by 4, so arr[] becomes {3, 3, 5, 5, 7}.
    Input: N = 3, arr[] = {1, 2, 3}
    Output: 0
    Explanation: No moves are needed as the array is already in increasing order.
*/

#include <iostream>

long increasingArray(std::vector<long> arr) {
    long moves = 0;
    for (size_t i = 0; i < arr.size() - 1; i++) {
        // diff two elems
        long diff = arr[i] - arr[i+1];
        if (diff > 0) {
            arr[i+1] += diff;
            moves += diff;
        }
    }
    return moves;
}

int main()
{
    std::vector<long> arr = { 3, 2, 5, 1, 7 };
    std::cout << increasingArray(arr) << "\n";
    arr = {1, 2, 3};
    std::cout << increasingArray(arr) << "\n";
    arr = {1, 0, -1};
    std::cout << increasingArray(arr) << "\n";

    return 0;
}
// Time: O(N), Space: O(1)