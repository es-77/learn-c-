#include <iostream>
#include <iomanip>

int main()
{
    // const int a = 2;
    // const float b = 2;
    // const char c = 2;

    // std::cout << "const in c ++ " << a;
    // // a = 12; not do like this
    // std::cout << "const in c ++ " << a;

    int a = 1, b = 2, c = 3;

    std::cout << "the value of a " << a << std::endl;
    std::cout << "the value of b " << b << std::endl;
    std::cout << "the value of c " << c << std::endl;

    std::cout << "the value of a " << std::setw(4) << a << std::endl;
    std::cout << "the value of b " << std::setw(4) << b << std::endl;
    std::cout << "the value of c " << std::setw(4) << c << std::endl;

    //  Manipulators Precedence
    // ((a*b) +4)
    return 0;
}