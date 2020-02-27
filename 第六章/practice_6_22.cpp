#include<iostream>

using namespace std;

void SwapPointer1(int *p, int *q){
    int *temp = p;
    p = q;
    q = temp;
}

void SwapPointer2(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

void SwapPointer3(int *&p, int *&q){
    int *temp = p;
    p = q;
    q = temp;
}

int main(){
    int a = 5, b = 10;
    int *p = &a, *q = &b;
    cout << "Before change, p = " << p << ", q = " << q << endl;
    cout << "*p = " << *p << ", *q = " << *q << endl;
    SwapPointer1(p, q);
    cout << "After change, p = " << p << ", q = " << q << endl;
    cout << "*p = " << *p << ", *q = " << *q << endl;
    cout << endl;

    a = 5, b = 10;
    p = &a, q = &b;
    cout << "Before change, p = " << p << ", q = " << q << endl;
    cout << "*p = " << *p << ", *q = " << *q << endl;
    SwapPointer2(p, q);
    cout << "After change, p = " << p << ", q = " << q << endl;
    cout << "*p = " << *p << ", *q = " << *q << endl;
    cout << endl;

    a = 5, b = 10;
    p = &a, q = &b;
    cout << "Before change, p = " << p << ", q = " << q << endl;
    cout << "*p = " << *p << ", *q = " << *q << endl;
    SwapPointer3(p, q);
    cout << "After change, p = " << p << ", q = " << q << endl;
    cout << "*p = " << *p << ", *q = " << *q << endl;
    cout << endl;

    return 0;
}
