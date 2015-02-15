#include <iostream>

#include "template_showcase.h"
namespace showcase {
}

int main(int c, char**p) {
    std::cout << showcase::plus<int>()(20, 40);
    return 0;
}
