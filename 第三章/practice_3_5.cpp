#include <iostream>
#include <string>

using namespace std;

int main(){
    char cont = 'y';
    string s, result;
    cout << "�������һ���ַ���: " << endl;
    while(cin >> s){
        result += s;
        cout << "�Ƿ����(y or n)?" << endl;
        cin >> cont;
        if(cont == 'y' || cont == 'Y')
            cout << "��������һ���ַ���: " << endl;
        else
            break;
    }
    cout << "ƴ�Ӻ���ַ�����: " << result << endl;

    char cont1 = 'y';
    string s1, result1;
    cout << "�������һ���ַ���: " << endl;
    while(cin >> s1){
        if(!result1.size())
            result1 += s1;
        else
            result1 = result1 + " " + s1;
        cout << "�Ƿ����(y or n)?" << endl;
        cin >> cont1;
        if(cont1 == 'y' || cont1 == 'Y')
            cout << "��������һ���ַ���: " << endl;
        else
            break;
    }
    cout << "ƴ�Ӻ���ַ�����: " << result1 << endl;
    return 0;
}
