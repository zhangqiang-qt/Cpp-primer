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
    cout << "������һ������:" << endl;
    cin >> val;
    cout << "���� " << val << " �Ľ׳�Ϊ " << fact(val) << endl;
    return 0;
}
