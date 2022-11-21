//
// Created on 2022/11/21.
// Location: dailytrial/d221121/test_const.cpp
//

#include<iostream>
extern const int ea=100;
int main() {
    const int a=10;
    const int & ra=a;
    const int * pa=&a;// a pointer to const val

    int v=20;
    int * const pv=&v;// a const pointer to val
    const int * const cpv=&v;// a const pointer to "const" val
    const int & rv=v;
    v=30;
    std::cout << "hello world!" << std::endl;
}