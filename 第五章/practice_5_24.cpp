#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    cout << "�������뱻�����ͳ���:" << endl;
    int i1, i2;
    cin >> i1 >> i2;
    if(i2 == 0){
        throw runtime_error("��������Ϊ0");
    }
    cout << "���Ϊ: " << i1 / i2 << endl;
    return 0;
}
