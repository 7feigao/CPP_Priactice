//
// Created by Qifei Gao on 2022/11/20.
// Location: dailytrial/d221120/test_var_assing_value.cpp
//

#include "iostream"

int main() {
    int a = 10;
    int b{10};
    int c = {10};
    int d(10);
    std::string s1("hello");
    std::string s2{"hello"};
    std::string s3= {"world"};
    std::string s4= "world";
    std::cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<s1<<" "<<s2<<std::endl;

}