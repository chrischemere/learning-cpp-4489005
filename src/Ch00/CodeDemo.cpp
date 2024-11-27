// Learning C++ 
// Exercise 00_03
// Using the exercise files on GitHub, by Eduardo Corpeño 

#include <iostream>
#include <string>
#include <typeinfo>
#include <cstdint> //popular header files in standard library

#define CAPACITY 5000 //find and replace CAPACITY with 5000
#define DEBUG


int a, b=5; //single line comment

/*Multi 
*Line
* Comment*/

int main(){

    //String
    std::string name;
    std::cout << "Hello World!" << std::endl;
    std::cout << "What is your name? " << std::flush;
    std::cin >> name;
    std::cout << "Nice to meet you, " << name << "!" << std::endl;
    std::cout << std::endl << std::endl;

    //Float integers
    float num_1, num_2, result;

    std::cout << "Enter number 1: " << std::flush;
    std::cin >> num_1;
    std::cout << "Enter number 2: " << std::flush;
    std::cin >> num_2;
    result = num_1 + num_2;
    
    std::cout << "The result of the addition is " << result << std::endl;
    std::cout << std::endl << std::endl;

    //Boolean and unsigned
    bool my_flag;
    a=7;
    my_flag = false;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "flag = " << my_flag << std::endl;
    my_flag = true;
    std::cout << "flag = " << my_flag << std::endl;
    std::cout << "a + b = " << a + b << std::endl;
    std::cout << "b - a = " << b - a << std::endl;
    unsigned int positive;
    positive = b - a;
    std::cout << "b - a (unsigned) = " << positive << std::endl; //(2^32) - 2 = 4294967294

    std::cout << std::endl << std::endl;


    //Type inference
    auto a = 8;
    auto b = 12345678901;
    auto c = 3.14f;
    auto d = 3.14;
    auto e = true;
    auto f= 'd';
    auto g = "C++ rocks!";

    std::cout << "The type of a is " << typeid(a).name() << std::endl; //i for integer
    std::cout << "The type of b is " << typeid(b).name() << std::endl; //l for long 
    std::cout << "The type of c is " << typeid(c).name() << std::endl; //f for float
    std::cout << "The type of d is " << typeid(d).name() << std::endl; //d for double
    std::cout << "The type of e is " << typeid(e).name() << std::endl; //b for bool
    std::cout << "The type of f is " << typeid(f).name() << std::endl; //c for char
    std::cout << "The type of g is " << typeid(g).name() << std::endl; //g for pointer to const char or string
    
    std::cout << std::endl << std::endl;

    //Preprosessor Directives
    int32_t large = CAPACITY;
    uint8_t small = 37;
#ifdef DEBUG
    std::cout << "[About to perform the addition]" << std::endl;
#endif
    large += small; // shorthand for "large = large + small;"
    std::cout <<" the large interger is " << large << std::endl;



    return (0);
}
