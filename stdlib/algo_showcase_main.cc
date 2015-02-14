#include <algorithm>    // std::find
#include <iostream>     // std::cout
#include <vector>       // std::vector

int main(int c, char**p) {
    std::vector<int> foo {1,2,3,4};
    int myints[] = { 10, 20, 30, 40 };
    int ival;
    std::cin >> ival;

    auto pos = std::find(foo.begin(), foo.end(), ival);
    auto pos2 = std::find(myints, myints + 4, ival);
    if (pos != foo.end()) {
        std::cout << "Found!!";
    } else {
        std::cout << "Not Found!!";
    }

    if (pos2 != myints + 4) {
        std::cout << "Found!!";
    } else {
        std::cout << "Not Found!!";
    }

    return 0;
}
