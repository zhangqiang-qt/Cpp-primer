#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    const int i = 42;
    auto j = i;    //variable j get type int
    const auto &k = i;  //k get type const int
    auto *p = &i;   //p get type const int *
    const auto j2 = i, &k2 = i; //j2 get type const int, k2 sames as k

    cout << i << "\t" << j << "\t" << k << "\t"
         << *p << "\t" << j2 << "\t" << k2 <<endl;

    cout << typeid(i).name() << endl;
    cout << typeid(j).name() << endl;
    cout << typeid(k).name() << endl;
    cout << typeid(p).name() << endl;
    cout << typeid(j2).name() << endl;
    cout << typeid(k2).name() << endl;
    return 0;
}
