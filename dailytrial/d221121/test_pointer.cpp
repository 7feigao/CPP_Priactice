//
// Created on 2022/11/21.
// Location: dailytrial/d221121/test_pointer.cpp
//

#include<iostream>

int main() {
    int a = 10;
    int *pa = &a;

    std::cout << "hello world!" << std::endl <<
              " pa: " << pa << std::endl <<
              " *pa:" << *pa << std::endl <<
              " &pa:" << &pa << std::endl <<
              " &*pa: " << &*pa << std::endl <<
              std::endl;
    int *pnull= nullptr;
    double d=3.14;
    double* pd=&d;
    int* *ppa=&pa; //type of pa is int*
    int** *pppa=&ppa;
    std::cout<<std::endl;
//
//hello world!
//pa: 0x7ff7b927155c
//*pa:10
//&pa:0x7ff7b9271550
//&*pa: 0x7ff7b927155c
}