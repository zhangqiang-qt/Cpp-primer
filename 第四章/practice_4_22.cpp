#include <iostream>
#include <string>

using namespace std;

int main(){
    string finalgrade;
    int grade;
    cout << "������Ҫ���ĳɼ�:" << endl;
    while(cin >> grade && grade >= 0 && grade <= 100){
        #if 0
        finalgrade = (grade > 90) ? "high pass"
                                  : (grade > 75) ? "pass"
                                  : (grade > 60) ? "low pass" : "fail";
        cout << "�óɼ������ĵ�����: " << finalgrade << endl;
        cout << "������Ҫ���ĳɼ�: " << endl;
        #endif // 0

        #if 1
        if(grade > 90)
            finalgrade = "high pass";
        else if(grade > 75)
            finalgrade = "pass";
        else if(grade > 60)
            finalgrade = "low pass";
        else
            finalgrade = "fail";
        cout << "�óɼ������ĵ�����: " << finalgrade << endl;
        cout << "������Ҫ���ĳɼ�: " << endl;
        #endif // 1
    }
    return 0;
}
