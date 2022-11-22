//
// Created on 2022/11/22.
// Location: dailytrial/d221122/test_constexpr.cpp
//

#include<iostream>

int main() {
    constexpr int a=30;
    constexpr int b=a+30;
    int c=40;
//    constexpr int d=c+40; //error
    constexpr const int e=50;
    constexpr int f=e+60;
    constexpr int *g=0;

    std::cout << "hello world!" << std::endl;
}