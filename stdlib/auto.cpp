#include <functional>
#include <vector>
#include <iostream>

class AB {
    public:
    AB() {
        v = std::vector<int>();
    }
    void Add(int a) {v.push_back(a);}
    std::vector<int> FindAllMatchingRange(std::function<bool (const int& val)> func) {
        std::vector<int> results;
        for (auto &i : v) {
            if (func(i)) {
                results.push_back(i);
            }
        }
        return results;
    }
    void Find() {
        for (auto &i : v) {
            std::cout << i << std::endl;
        }
    }
    private:
    std::vector<int> v;
};
int main(void) {
    AB ab;
    ab.Add(17);
    ab.Add(12);
    ab.Add(23);
    ab.Add(42);
    //ab.Find();
    auto results = ab.FindAllMatchingRange([](int val){return val%2 == 0;});
    for (auto &r : results) {
        std::cout << r << std::endl;
    }
    return 0;
}
