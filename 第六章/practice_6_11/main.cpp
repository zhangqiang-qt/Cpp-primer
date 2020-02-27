#include <iostream>
#include "practice6_2.h"

using namespace std;

int main()
{
    int num = 10;
    cout << "Before reset, num = " << num << endl;
    reset(num);
    cout << "After reset, num = " << num << endl;
    cout << endl;

    int a = 10, b = 20;
    cout << "Before swap, a = " << a << ", b = " << b << endl;
    mySwap(a, b);
    cout << "After swap, a = " << a << ", b = " << b << endl;
    return 0;
}
