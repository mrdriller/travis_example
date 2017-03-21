//
// main.cpp
//

#include <iostream>
#include "dummy.h"

int main(int argc, char *argv[]) {
    std::cout << "Travis CI example" << std::endl;

    Dummy dummy(3, 4.5);
    dummy.seta(6);

    return 0;
}
