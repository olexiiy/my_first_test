#include "lib.h"

#include <iostream>

int main (int, char **) {
    std::cout << "Version: " << version() << std::endl;
    std::cout << "NOT Hello, world!" << std::endl;
    return 0;
}
