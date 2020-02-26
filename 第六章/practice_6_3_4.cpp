#include <iostream>

using namespace std;

int fact(int ival){
    if(ival < 0)
        return -1;
    int ret = 1;
    while(ival > 1)
        ret *= ival--;
    return ret;
}

int main(){
    int val;
    cout << "请输入一个整数:" << endl;
    cin >> val;
    cout << "整数 " << val << " 的阶乘为 " << fact(val) << endl;
    return 0;
}
