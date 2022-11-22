//
// Created on 2022/11/22.
// Location: dailytrial/d221122/test_structure.cpp
//

#include<iostream>

struct Sale_Items {
    std::string name;
    unsigned int id;
    double revenue = 0.0;
};

int main() {
    Sale_Items saleItems;
    saleItems.id = 123;
    saleItems.name="hello";
    saleItems.revenue=12.3;
    std::cout << "hello world!" <<saleItems.name<< std::endl;
}