// Simple program that prints "Hello World".

#include <iostream>
#include <string>
#include <vector>

#include "lib.h"

int main(int argc, char** argv) {
    std::cout << "Hello World!" << std::endl;

    std::cout << "According to my calculations, 2 to the power of 6 is "
              << std::to_string(custom::Power(2, 6)) << std::endl;

    const std::vector<std::string> gang = {"Edgar", "Erika", "Gene",
                                           "Chelsea", "Davidson"};

    std::cout << "Beware of " << std::endl;

    for (std::string name : gang) {
        std::cout << custom::ToSlimeLanguage(name) << std::endl;
    }

    return 0;
}