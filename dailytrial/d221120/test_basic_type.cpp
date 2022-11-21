//
// Created by Qifei Gao on 2022/11/20.
// Location: dailytrial/d221120/test_basic_type.cpp
//
#include<iostream>
int main(){
//    基本数据类型
    bool val_bool= false;
    char val_char='c';
    int val_int=10;//16 bit
    wint_t val_wint_t=9;//16 bit
    wchar_t val_wchar_t=L'c'; //16 bit
    char16_t  val_char16_t=u'c';// unicode 16 bit
    char32_t  val_char32_t=U'c';// unicode 32 bit
    short val_short=123;// 16 bit
    int val_overflow_int=1000000000000000000; // val is unexpected
    unsigned int val_overflow_unsigned_int=1000000000000000000U; // val is mod max
    long  val_long=100000L; // 32 bit
    long long val_long_long=1000000LL; // 64 bit
    float val_float=1.234567890F; //precision: fist 6 digit
    double val_double=1.2345678901234567890; // precision: first 10 digit
    long double val_long_double=1.2345678901234567890L;// precision: first 10 digit

    // 复杂数据类型
    std::string s="hello";
    std::cout<<s[3]<<std::endl;
}