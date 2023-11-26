#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}
inline int inlineMultiply(int a, int b)
{
    return a * b + 1;
}
int staticMultiply(int a, int b)
{
    static int c = 0; // only run one time
    c = c + 1;
    return ((a * b) + c);
}

int defaultArguments(int money, float factor = 10.1)
{
    return money * factor;
}

int main()
{
    int a, b;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
    // cout << "the value of a and b enter is : a " << a << " b : " << b << endl;
    // cout << "multply  is = : " << multiply(a, b) << endl;
    // cout << "multply  is = : " << inlineMultiply(a, b) << endl;
    // cout << "multply 1 is = : " << staticMultiply(a, b) << endl;
    // cout << "multply 2 is = : " << staticMultiply(a, b) << endl;
    // cout << "multply 3 is = : " << staticMultiply(a, b) << endl;
    cout << "Default Arguments  is = : " << defaultArguments(a) << endl;
    cout << "inlineFunctionsDefaultArgumentsConstantArguments" << endl;
    return 0;
}