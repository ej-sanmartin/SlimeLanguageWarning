#ifndef BAZEL_SETUP_LIB_H_
#define BAZEL_SETUP_LIB_H_

#include <string>

namespace custom {

std::string ToSlimeLanguage(const std::string& input);

// Raises a given number to a specified power.
// Doesn't handle negative power numbers as expected.
// Instead, negative numbers act as if the number is passed to the power of 1.
extern inline int Power(int num, int power) {
    if (power == 0) {
        return 1;
    }

    int result = num;

    // Will skip power of 1 since any number raised by power of 1 is itself.
    for (int i = 2; i <= power; i++) {
        result *= num;
    }

    return result;
}

}  // namespace custom

#endif  // BAZEL_SETUP_LIB_H_