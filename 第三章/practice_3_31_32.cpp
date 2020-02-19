#include<iostream>
#include<vector>
#include<cstddef>
using namespace std;

int main(){
    //3.31
    const size_t sz = 10;
    int a[sz];
    for(int i = 0; i < 10; i++)
        a[i] = i;
    for(auto val : a)
        cout << val << " ";
    cout << endl << endl;

    //3.32
    int a1[sz], b1[sz];
    for(int i = 0; i < 10; i++)
        a1[i] = i;
    for(int j = 0; j < 10; j++)
        b1[j] = a1[j];
    for(auto val : b1)
        cout << val << " ";
    cout << endl << endl;

    vector<int> vInt, vInt1;
    for(int i = 0; i < 10; i++)
        vInt.push_back(i);
    for(int j = 0; j < 10; j++)
        vInt1.push_back(vInt[j]);
    for(auto val : vInt1)
        cout << val << " ";
    cout << endl << endl;

    return 0;
}
