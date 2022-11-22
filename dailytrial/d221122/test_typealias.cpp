//
// Created on 2022/11/22.
// Location: dailytrial/d221122/test_typealias.cpp
//

#include<iostream>
typedef double wages;
typedef wages page,*ppage;
using uwage=double;
using puwage=double*;
int main() {
    int a=0;
    wages c=1.23;
    double* pc=&c;
    wages* pwc=&c;
    wages &rwc=c;
    ppage ppage=&rwc;
    page* pp=&c;
    uwage uw = c;
    uwage *puw=&uw;
    puwage ppuw=&uw;



    std::cout << "hello world!" << std::endl;
}