#include <iostream>
#include <string>

using namespace std;

int main(){
    do{
        cout << "�����������ַ���:" << endl;
        string str1, str2;
        cin >> str1 >> str2;
        if(str1.size() < str2.size())
            cout << "���Ƚ�С���ַ�����: " << str1 << endl;
        else if(str1.size() > str2.size())
            cout << "���Ƚ�С���ַ�����: " << str2 << endl;
        else
            cout << "�ַ����������" << endl;
    }while(cin);
    return 0;
}
