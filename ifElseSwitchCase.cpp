#include <iostream>

int main()
{

    std::cout << "if else switch case";
    std::cout << "Enter your age" << std::endl;
    int age = 0;
    std::cin >> age;

    // if (age < 10)
    // {
    //     std::cout << "You can not endter";
    // }
    // else if (age == 18)
    // {
    //     std::cout << "your age in meddle";
    // }
    // else
    // {
    //     std::cout << "you can enter ";
    // }

    switch (age)
    {
    case 10:
        std::cout << "your age is" << age << std::endl;
        break;
    case 11:
        std::cout << "your age is" << age << std::endl;
        break;
    case 12:
        std::cout << "your age is" << age << std::endl;
        break;
    case 13:
        std::cout << "your age is" << age << std::endl;
        break;

    default:
        std::cout << "your age is default" << age << std::endl;
        break;
    }

    return 0;
}