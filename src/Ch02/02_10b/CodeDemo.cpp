// Learning C++ 
// Exercise 02_10
// Type Casting, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>


//Type Casting

int main(){
    float flt;
    int32_t sgn;
    uint32_t unsgn;

    flt = -7.66;
    sgn = flt;
    unsgn = sgn;

    std::cout << "Float: " << flt << std::endl;
    std::cout << "int32: " << sgn << std::endl;
    std::cout << "unint32: " << (int32_t) unsgn << std::endl;
    
    std::cout << std::endl << std::endl;
    return (0);
}
