// Learning C++ 
// Exercise 01_02
// Hello World, by Eduardo Corpeño 

#include <iostream>
#include <string>


//String
int main(){
    std::string name;
    std::cout << "Hello World!" << std::endl;
    std::cout << "What is your name? " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << "!" << std::endl;
    std::cout << std::endl << std::endl;

    return(0);
}