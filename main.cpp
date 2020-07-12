#include <iostream>
#include <string>
#include <library.h>
#include <vector>
#include "test.h"

int main() {

    std::vector<std::string> s;

    In in("test1.txt");
    in.readAllStrings(s);
    for (auto & i : s)
    {
        std::cout << i << std::endl;
    }

    std::cout << sum(1,3) << std::endl;
    return 0;
}
