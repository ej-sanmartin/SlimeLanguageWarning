#include "lib.h"

#include <stdio.h>
#include <string>

namespace custom {

// Assumes American English characters used.
bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
        return true;
    }

    return false;
}

std::string ToSlimeLanguage(const std::string& input) {
    std::string output = std::string();

    int buffer = input.length();
    char input_arr[buffer];
    input.copy(input_arr, buffer);

    for (char element : input_arr) {
        if (isVowel(element)) {
            output += "oo";
        } else {
            output += element;
        }
    }

    return output;
}

}  // namespace custom