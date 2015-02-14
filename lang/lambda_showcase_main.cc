#include <algorithm>
#include <iostream>
#include <vector>
#include <functional>   // std::plus

struct mod {
    mod (int modulus) : m_ (modulus) {}
    int operator() (int i) {return i % m_; }
    int m_;
};

template<typename T>
void fill(std::vector<int>& v, T done) {
    int i = 0;
    while(!done()) {
        v.push_back(i++);
    }
}


int main(int c, char** a) {
    []() {std::cout << "foo" << std::endl;} ();
    [](int i) {std::cout << i << std::endl;} (10);
    int my_mod = 8;
    std::vector<int> v {10, 20, 30, 40};
    std::vector<int> out;
    out.resize(v.size());
    std::transform(v.begin(), v.end(), out.begin(),
        mod(my_mod));
    for (auto value : v) {
        std::cout << value << std::endl;
    }
    std::vector<int> stuff;
    fill(stuff, [&] {
            int sum = 0;
            std::for_each(stuff.begin(), stuff.end(),
                [&](int i) { sum += i;});
            return sum >= 100;
            });
    for (auto value : stuff) {
        std::cout << value << std::endl;
    }
    std::cout << "-------------------\n";
    
    int vv = 42;
    // Capture by value is at time of eval.
    auto func = [=] {std::cout << vv << std::endl;};
    vv = 33;
    func();
    return 0;
}

