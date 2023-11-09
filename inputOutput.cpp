#include <iostream>
using namespace std;
int main()
{
    cout << "input output "; // insertion operator
    int num1, num2 = 0;

    cout << "Enter first number : ";
    cin >> num1; // extraction operator

    cout << "Enter second number : ";

    cin >> num2;

    cout << "the sum of first number and second number is :" << num1 + num2;

    return 0;
}