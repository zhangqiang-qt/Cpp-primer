#include <iostream>

using namespace std;

int main(){
    int sum = 0, first, second;
    cout << "输入两个整数，第一个小于等于第二个:" << endl;
    cin >> first >> second;
    while(first <= second){
        sum += first;
        ++first;
    }
    cout << "Sum of first to second inclusive is " << sum << endl;
    return 0;
}
