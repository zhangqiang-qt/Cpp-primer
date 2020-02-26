#include <iostream>

using namespace std;

int abs(int ival){
    return ival >= 0? ival : -ival;
}

int main(){
    cout << "请输入一个整数:" << endl;
    int val;
    cin >> val;
    cout << "该整数对应的绝对值为 " << abs(val) << endl;
    return 0;
}
