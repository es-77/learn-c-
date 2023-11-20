#include <iostream>
using namespace std;

int main()
{
    cout << "pointer in c ++" << endl;

    int a = 1;
    int *b = &a;

    cout << "the address of a in memery is : " << &a << endl;
    cout << "the address of a in memery is : " << b << endl;

    // dereference of value
    cout << "dereference the address of a in memery is : " << *b << endl;

    return 0;
}