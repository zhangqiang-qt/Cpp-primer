#include <iostream>
#include <stdexcept>

using namespace std;

int main(){
    cout << "依次输入被除数和除数:" << endl;
    int i1, i2;
    while(cin >> i1 >> i2){
        try{
            if(i2 == 0){
                    throw runtime_error("除数不能为0");
            }
            cout << "结果为: " << i1 / i2 << endl;
        } catch (runtime_error err){
            cout << err.what() << endl;
            cout << "是否继续？(y or n)" << endl;
            char ch;
            cin >> ch;
            if(ch == 'y' || ch == 'Y')
                break;
        }
    }
    return 0;
}
