//
// Created on 2022/11/21.
// Location: dailytrial/d221121/test_reference.cpp
//

#include<iostream>

int main() {
    int a=10,&ra=a;
    a=20,ra=30;
    std::cout << "hello world!"<<" a:"<<a<<" ra:"<<ra << std::endl;
}