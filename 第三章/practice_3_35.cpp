#include<iostream>

using namespace std;

int main(){
    const int sz = 5;
    int a[sz], i = 0;
    for(i = 0; i < sz; i++)
        a[i] = i;
    cout << "The primer array is: " << endl;
    for(auto b : a)
        cout << b << " ";
    cout << endl;

    int * p = begin(a);
    while(p != end(a)){
        * p = 0;
        ++p;
    }
    cout << "After the change, the array is: " << endl;
    for(auto b : a)
        cout << b << " ";
    cout << endl;
    return 0;
}
