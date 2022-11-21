cmake_minimum_required(VERSION 3.23)
project(CPP_Priactice)

set(CMAKE_CXX_STANDARD 14)

#add_executable(CPP_Priactice
#        dailytrial/d221120/test_basic_type.cpp)
add_executable(test_basic_type dailytrial/d221120/test_basic_type.cpp)
add_executable(test_var_assing_value dailytrial/d221120/test_var_assing_value.cpp)
add_executable(test_external_var dailytrial/d221120/test_external_var/test_external_var.cpp)
add_executable(external_var dailytrial/d221120/test_external_var/external_var.cpp)
add_executable(test_reference dailytrial/d221121/test_reference.cpp)
add_executable(test_pointer dailytrial/d221121/test_pointer.cpp)
add_executable(test_const dailytrial/d221121/test_const.cpp)