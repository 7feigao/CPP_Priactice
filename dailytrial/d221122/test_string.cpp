//
// Created on 2022/11/22.
// Location: dailytrial/d221122/test_string.cpp
//

#include<iostream>

int main() {
    std::string s1 = "hello";
    std::string s2 = "world!";

    std::cout << "s1: " << s1 << std::endl;
    std::cout << "s1+s2: " << s1 + s2 << std::endl;
    std::cout << "s1.length: " << s1.length() << std::endl;
    int count = 0;
    while (std::cin >> s1 && count++ < 3) {
        std::cout << "input: " << s1 <<
                  " len: " << s1.length() <<
                  " isempty: " << s1.empty()
                  << std::endl;
    }
    while (getline(std::cin, s1)) {
        std::cout << "input: " << s1 <<
                  " len: " << s1.length() <<
                  " isempty: " << s1.empty()
                  << std::endl;
    }


}