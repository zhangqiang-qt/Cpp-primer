#include <iostream>

using namespace std;

int compare(const int i, const int *pi){
    return i > *pi ? i : *pi;
}

int main(){
    cout << "输入两个整数:" << endl;
    int i1, i2, res;
    cin >> i1 >> i2;
    int *p = &i2;
    res = compare(i1, p);
    cout << "较大值为: " << res << endl;
    return 0;
}
