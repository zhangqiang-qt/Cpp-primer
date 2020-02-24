#include <iostream>
#include <string>

using namespace std;

int main(){
    string finalgrade;
    int grade;
    cout << "请输入要检查的成绩:" << endl;
    while(cin >> grade && grade >= 0 && grade <= 100){
        #if 0
        finalgrade = (grade > 90) ? "high pass"
                                  : (grade > 75) ? "pass"
                                  : (grade > 60) ? "low pass" : "fail";
        cout << "该成绩所处的档次是: " << finalgrade << endl;
        cout << "请输入要检查的成绩: " << endl;
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
        cout << "该成绩所处的档次是: " << finalgrade << endl;
        cout << "请输入要检查的成绩: " << endl;
        #endif // 1
    }
    return 0;
}
