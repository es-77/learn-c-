#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << "the value of i is : " << i << std::endl;
        // if (i == 2) // beak the loop and exit the loop
        // {
        //     break;
        // }
        if (i < 5)
        {
            continue;
        }
        cout << "after continue the value of i is : " << i << std::endl;
    }

    return 0;
}