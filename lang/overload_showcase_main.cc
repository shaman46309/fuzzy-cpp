#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "lib.h"
#include "overload_showcase.h"

int main(int c, char** a) {
    lib::say("Main has started...");
    lib::say("Enter your name below");
    showcase::C1 c1;
    showcase::C2 c2;
    c1.SetIvalue(20);
    c2.SetIvalue(30);
    std::string str = "Hello, ";
    std::string name;
    std::cin >> name;
    lib::say(str);
    lib::say(name);
    lib::say("Main has ended...");
}

