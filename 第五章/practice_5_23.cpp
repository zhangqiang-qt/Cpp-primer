#include <iostream>

using namespace std;

int main(){
    cout << "依次输入被除数和除数:" << endl;
    int i1, i2;
    cin >> i1 >> i2;
    if(i2 == 0){
        cout << "除数不能为0" << endl;
        return -1;
    }
    cout << "结果为: " << i1 / i2 << endl;
    return 0;
}
