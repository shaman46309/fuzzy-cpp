#include <algorithm>
#include <functional>
#include <iostream>
#include <set>
#include <string>
#include <vector>

using std::string;
int main(int argc, char **argv) {
    std::cout << "Start of main" << std::endl;
    std::set<string> a;
    std::set<int> b;
    a.insert("hello");
    a.insert("hello2");
    a.insert("popo");
    a.insert("hello3");
    a.insert("hello3");

    std::vector<int> sizes;
    std::function<int (const string&s)> transformer =
        [](const string&s) {return s.size();};
    sizes.resize(a.size());
    std::transform(a.begin(), a.end(), sizes.begin(), transformer);
    std::transform(a.begin(), a.end(), std::inserter(b, b.begin()), transformer);
    for (auto& size : sizes ) {
        std::cout << "size is " << size << std::endl;
    }

    std::cout << "Stored value in a set, results are: \n";
    for (auto& b_mem : b) {
        std::cout << "size is " << b_mem << std::endl;
    }
    std::vector<int>::const_iterator it = std::find(sizes.begin(), sizes.end(), 44);
    bool found = it != sizes.end();
    std::cout << "Searched for size 44 " << found << std::endl;

    return 0;
}

