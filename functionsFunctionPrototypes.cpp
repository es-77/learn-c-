#include <iostream>
using namespace std;

int sum(int num1, int num2)
{
    int c = num1 + num2;
    return c;
}

// Function Prototypes

int subtract(int number1, int number2);

int main()
{
    cout << "function";
    int num1, num2;
    cout << "Enter One Number : ";
    cin >> num1;
    cout << "Enter Second Number : ";
    cin >> num2;

    cout << "the sum of  " << num1 << " + " << num2 << " is = " << sum(int(num1), int(num2)) << endl;

    cout << "the function prototyping";
    int number1, number2;
    cout << "Enter One Number : ";
    cin >> number1;
    cout << "Enter Second Number : ";
    cin >> number2;
    cout << "the minus of  " << number1 << " - " << number2 << " is = " << subtract(int(number1), int(number2)) << endl;

    return 0;
}

int subtract(int number1, int number2)
{
    int c = number1 - number2;
    return c;
}