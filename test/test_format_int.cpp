#include <iostream>
#include "caffe/util/format.hpp"
using namespace caffe;

void test_format_int(){
    std::string str = format_int(3, 5);
    std::cout << str << std::endl;
}

int main(){
    test_format_int();
}
