#include <iostream>
#include <string>
#include <algorithm>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; ++i)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    std::string studentID = "bc523456789";
    char firstLetter = studentID[0];

    std::string programName;
    if ((firstLetter == 'b' || firstLetter == 'B'))
    {
        programName = "Bachelors";
    }
    else if ((firstLetter == 'm' || firstLetter == 'M'))
    {
        programName = "Masters";
    }
    else
    {
        programName = "Unknown";
    }

    std::cout << "Student ID: " << studentID << std::endl;
    std::cout << "Program Name: " << programName << std::endl;

    std::string reversedID = studentID.substr(2);
    std::reverse(reversedID.begin(), reversedID.end());

    std::cout << "Reversed ID: " << reversedID << std::endl;

    std::string lastTwoDigits = reversedID.substr(reversedID.size() - 2);

    int lastDigit = lastTwoDigits.back() - '0';

    if (isPrime(lastDigit))
    {
        std::cout << lastDigit << " is a prime number." << std::endl;
    }
    else
    {
        std::cout << lastDigit << " is not a prime number." << std::endl;
    }

    return 0;
}
