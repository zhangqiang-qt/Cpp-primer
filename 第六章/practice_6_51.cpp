#include <iostream>

using namespace std;

void f(){
    cout << "�ú����޲���" << endl;
}

void f(int){
    cout << "�ú�����һ�����Ͳ���" << endl;
}

void f(int, int){
    cout << "�ú������������Ͳ���" << endl;
}

void f(double, double){
    cout << "�ú���������˫���ȸ����Ͳ���" << endl;
}
int main(){
    //f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    return 0;
}
