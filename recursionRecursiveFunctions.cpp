#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int a = 0;
    cout << "Enter the factorial number : ";
    cin >> a;
    cout << "the factorial of : " << a << " is : " << factorial(a) << endl;
    cout << "recursionRecursiveFunctions.cpp";
    return 0;
}