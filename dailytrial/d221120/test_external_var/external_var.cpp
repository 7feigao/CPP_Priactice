//
// Created on 2022/11/20.
// Location: dailytrial/d221120/test_external_var/external_var.cpp
//

#include <iostream>

int main() {
    std::cout << "hello world!" << std::endl;
}

#include "external_var.h"
int get_value(){
    return val_external;
}
