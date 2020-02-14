#include <iostream>

using namespace std;

int main(){
    int a = 3, b = 5;
    int *p = &a;
    cout << p << " " << *p << endl;
    p = &b;
    cout << p << " " << *p << endl;
    *p = 8;
    cout << p << " " << *p << endl;
    b = 100;
    cout << p << " " << *p << endl;
    return 0;
}
