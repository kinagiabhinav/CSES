/*
    Given an array arr[] of size N - 1 containing numbers between 1, 2... N, except one, the task is to find the missing number.

    Examples:

    Input: N = 5, arr[] = {2, 3, 1, 5}
    Output: 4
    Explanation: arr[] contains all numbers from 1 to 5 except 4, therefore the answer is 4.

    Input: N = 6, arr[] = {4, 5, 1, 2, 3}
    Output: 6
    Explanation: arr[] contains all numbers from 1 to 6 except 6, therefore the answer is 6.
*/

#include <iostream>

void missingNumber(int N, int* arr) {
    // apply formula n*n+1/2, find sum till n
    // loop and subtract each element in arr
    int sum = N * (N + 1) / 2;
    for (int i = 0; i < N - 1; ++i) {
        sum -= arr[i];
    }
    std::cout << sum << std::endl;
}

int main() {
    int arr1[] = {2, 3, 1, 5};
    missingNumber(5, arr1);
    int arr2[] = {4, 5, 1, 2, 3};
    missingNumber(6, arr2);
}
// Time: O(N), Space: O(1)