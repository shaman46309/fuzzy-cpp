#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "lib.h"
#include "overload_showcase.h"

int main(int c, char** a) {
    lib::say("Main has started...");
    lib::say("Enter your name below");
    std::string name;
    std::cin >> name;

    std::string str = "Hello, ";
    str.operator+=(name);
    lib::say(str);
    operator<<(operator<<(std::cout, str) , '\n'); // same as std::cout << str << '\n';
    // Now showcase custom examples below.
    showcase::C c1;
    showcase::C c2;
    c1.SetIvalue(20);
    c2.SetIvalue(30);
    showcase::C sum = c1 + c2;
    showcase::C difference = c1 - c2;
    lib::say(sum.ivalue_);
    lib::say(difference.ivalue_);
    lib::say(c1 > c2);
    lib::say(c1 < c2);
    lib::say("Main has ended...");
}

