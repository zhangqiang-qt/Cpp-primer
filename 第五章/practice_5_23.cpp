#include <iostream>

using namespace std;

int main(){
    cout << "�������뱻�����ͳ���:" << endl;
    int i1, i2;
    cin >> i1 >> i2;
    if(i2 == 0){
        cout << "��������Ϊ0" << endl;
        return -1;
    }
    cout << "���Ϊ: " << i1 / i2 << endl;
    return 0;
}
