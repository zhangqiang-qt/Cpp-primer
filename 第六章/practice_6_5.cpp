#include <iostream>

using namespace std;

int abs(int ival){
    return ival >= 0? ival : -ival;
}

int main(){
    cout << "������һ������:" << endl;
    int val;
    cin >> val;
    cout << "��������Ӧ�ľ���ֵΪ " << abs(val) << endl;
    return 0;
}
