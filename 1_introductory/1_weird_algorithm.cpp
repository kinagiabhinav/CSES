/*
Consider an algorithm that takes as input a positive integer N. If N is even, the algorithm divides it by two, and if N is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until N is one. Your task is to simulate the execution of the algorithm for a given value of N.

Examples:

Input: N = 13
Output: 13 40 20 10 5 16 8 4 2 1
Explanation: 



Initially N = 13 which is odd, so N becomes = 40
Now, N = 40, which is even, so N becomes = 20
Now, N = 20, which is even, so N becomes = 10
Now, N = 10, which is even, so N becomes = 5
Now, N = 5, which is odd, so N becomes = 16
Now, N = 16, which is even, so N becomes = 8
Now, N = 8, which is even, so N becomes = 4
Now, N = 4, which is even, so N becomes = 2
Now, N = 2, which is even, so N becomes = 1
Input: N = 5
Output: 5 16 8 4 1
Explanation: 



Initially, N = 5, which is odd, so N becomes = 16
Now, N = 16, which is even, so N becomes = 8
Now, N = 8, which is even, so N becomes = 4
Now, N = 4, which is even, so N becomes = 2
Now, N = 2, which is even, so N becomes = 1
*/

#include <iostream>
void weirdAlgorithm(long N){
    // while N is not 1
    // N is even, N = N/2
    // N is odd, N = N*3/1
    while (N != 1) {
        N = (N % 2 == 0) ? N / 2 : (N * 3) + 1;
        std::cout << N << " ";
    }
}

int main() {
    weirdAlgorithm(13);
    std::cout << std::endl;
    weirdAlgorithm(5);
}
// Time : O(N), Space: O(1)