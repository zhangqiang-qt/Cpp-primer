#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    cout << "�������뱻�����ͳ���:" << endl;
    int i1, i2;
    while(cin >> i1 >> i2){
        try{
            if(i2 == 0){
                    throw runtime_error("��������Ϊ0");
            }
            cout << "���Ϊ: " << i1 / i2 << endl;
        } catch (runtime_error err){
            cout << err.what() << endl;
            cout << "�Ƿ������(y or n)" << endl;
            char ch;
            cin >> ch;
            if(ch == 'y' || ch == 'Y')
                break;
        }
    }
    return 0;
}
