#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    vector<int> vInt;
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10; i++){
        vInt.push_back(rand() % 1000);
    }
    cout << "随机生成的10个数字是: " << endl;
    for(auto it = vInt.cbegin(); it != vInt.cend(); it++)
        cout << *it << " ";
    cout << endl;
    cout << "翻倍之后的10个数字是: " << endl;
    for(auto it = vInt.begin(); it != vInt.end(); it++)
        cout << (*it) * 2 << " ";
    cout << endl;

    return 0;
}
