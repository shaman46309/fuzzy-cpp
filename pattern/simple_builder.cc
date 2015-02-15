#include <algorithm>
#include <iostream>
#include <vector>

class MyCustomList {
    public:
        MyCustomList(int mod) : m_(mod) {}
        MyCustomList& Put(int v) {values.push_back(v); return *this;}
        MyCustomList Put2(int v) {values.push_back(v); return *this;}
        int Extras() {
            int count = 0;
            std::for_each(values.begin(), values.end(),
                    // You capture what you use, so values is not copied.
                    [=, &count](int v) { count += v % m_;});
            return count;
        }
        int Size() const {
            return values.size();
        }
    private:
    std::vector<int> values;
    int m_;
};

int main(int c, char** a) {
    // For first list, the reference is returned.
    // Hence .Put(3).Put(7).Put(8) puts 3 value in the list.
    MyCustomList list(4);
    list.Put(3).Put(7).Put(8);
    std::cout << "extras: " << list.Extras() << std::endl;
    MyCustomList list2(4);
    // For second list, the copy is returned
    // Hence only 3 was put into list2.
    list2.Put2(3).Put2(7).Put2(8);
    std::cout << list2.Size() << " was the size of list2" << std::endl; 
    std::cout << "extras: " << list2.Extras() << std::endl;
    return 0;
}


