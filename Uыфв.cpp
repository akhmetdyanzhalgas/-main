#include <iostream>
#include <string>
using namespace std;
string extractPairChars(const string& input, int index1, int index2) {
    if (index1 < 0 || index2 < 0 || index1 >= input.length() || index2 >= input.length()) {
        return "Invalid indices";
    }
    return string(1, input[index1]) + string(1, input[index2]);
}


