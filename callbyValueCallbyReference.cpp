#include <iostream>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swapPointer(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void swapReferenace(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int &referenace(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int a = 1;
    int b = 2;
    // swap(a, b);
    cout << "the value of a : " << a << endl;
    cout << "the value of b : " << b << endl;
    // call by referenace by pointers
    // swapPointer(&a, &b);
    // cout << "the value of a : " << a << endl;
    // cout << "the value of b : " << b << endl;
    // swapReferenace(a, b);
    // cout << "the value of a : " << a << endl;
    // cout << "the value of b : " << b << endl;
    referenace(a, b) = 12;
    cout << "the value of a : " << a << endl;
    cout << "the value of b : " << b << endl;

    cout << "callbyValueCallbyReference";
    return 0;
}