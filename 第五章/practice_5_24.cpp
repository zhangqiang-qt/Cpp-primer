#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    cout << "依次输入被除数和除数:" << endl;
    int i1, i2;
    cin >> i1 >> i2;
    if(i2 == 0){
        throw runtime_error("除数不能为0");
    }
    cout << "结果为: " << i1 / i2 << endl;
    return 0;
}
