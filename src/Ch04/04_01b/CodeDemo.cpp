// Learning C++ 
// Exercise 04_01
// If Statements, by Eduardo Corpeño 

#include <iostream>

int main(){
    int a = 1258;
    bool flag = true;
    char lttr = 'z';

    if(a>1000)
        std::cout << "Warning: a is over 1000." <<std::endl;
    if(a<1000)
        std::cout << "a is less than 1000. a = " << a << std::endl;   
    if (a%2)
        std::cout << "a is odd" << std::endl;
    else
        std::cout << "a is even" << std::endl;

    std::cout << "The letter " << lttr << " is ";
    if(lttr != 'a' && lttr != 'e'  && lttr != 'i'  && lttr != 'o' && lttr != 'u')
        std::cout << "not ";
    std::cout << "a vowel" << std::endl;

    std::cout << std::endl << std::endl;
    return (0);
}
