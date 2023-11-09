#include <iostream>
int globalVariable = 123;

void myFunction()
{
    // int globalVariable = 1;
    std::cout
        << "my function call " << globalVariable;
}

int main()
{
    std::cout << "function write in c++";
    myFunction();
    return 0;
}