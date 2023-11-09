#include <iostream>
using namespace std;
int main()
{
    cout << "operators" << endl;

    cout << "arthmatic operators" << endl;
    int num1 = 4;
    int num2 = 4;
    cout << "num1 + num2 : " << num1 + num2 << endl;
    cout << "num1 - num2 : " << num1 - num2 << endl;
    cout << "num1 * num2 : " << num1 * num2 << endl;
    cout << "num1 / num2 : " << num1 / num2 << endl;
    cout << "num1 % num2 : " << num1 % num2 << endl;
    cout << "++num1 : " << ++num1 << endl;
    cout << "--num1 : " << --num1 << endl;

    //  assign operators
    // num1 = 123;
    // cout << num1 << endl;

    //  comparson operators
    cout << "num1 and num2 ==" << (num1 == num2) << endl;
    cout << "num1 and num2 !=" << (num1 != num2) << endl;
    cout << "num1 and num2 >" << (num1 > num2) << endl;
    cout << "num1 and num2 <" << (num1 < num2) << endl;

    //  logical operators

    bool value1 = true;
    bool value2 = false;

    cout << "and operators : " << (value1 && value2) << endl;
    cout << "or operators : " << (value1 || value2) << endl;
    cout << "not operators : " << !(value1 && value2) << endl;

    return 0;
}