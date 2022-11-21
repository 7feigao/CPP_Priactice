//
// Created on 2022/11/20.
// Location: dailytrial/d221120/test_external_var/test_external_var.cpp
//

#include <iostream>
#include "external_var.h"
extern int val_external;
int main() {
    val_external2=300;
    std::cout << "hello world! "<<val_external<<" "<<val_external2<<" "<< std::endl;

}