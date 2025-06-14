/*
    You are given a DNA sequence: a string S consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

    Examples:

    Input: S = "ATTCGGGA"
    Output: 3
    Explanation: The longest repetition in the sequence is "GGG" which has a length of 3.

    Input: S = "AATTGGCCCC"
    Output: 4
    Explanation: The longest repetition in the sequence is "CCCC" which has a length of 4.

*/
#include <iostream>

void repetitions(const std::string& s) {
    int maxOccurrence = 0;
    int occurrence = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == s[i+1]) {
            occurrence += 1;
            if (occurrence > maxOccurrence) {
                maxOccurrence = occurrence;
            }
        } else {
            occurrence = 1;
        }
    }
    std::cout << maxOccurrence << std::endl;
}

int main() {
    std::string s = "ATTCGGGA";
    repetitions(s);
    s = "AATTGGCCCC";
    repetitions(s);
    s = "";
    repetitions(s);
    s = "AAAAAA";
    repetitions(s);
}

// Time: O(N), Space: O(1)