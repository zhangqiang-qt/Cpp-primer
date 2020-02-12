#include <iostream>

using namespace std;

int main(){
    int sum = 0;
    for(int val = 50; val <= 100; ++val)
        sum += val;
    cout << "Sum of 50 to 100 inclusive is " << sum << endl;
    cout << endl;

    int sum2 = 0;
    for(int val2 = 10; val2 >= 0; --val2)
        sum2 += val2;
    cout << "Sum of 1 to 10 inclusive is " << sum2 << endl;
    cout << endl;

    int sum3 = 0, first, second;
    cout << "输入两个整数，第一个小于等于第二个:" << endl;
    cin >> first >> second;
    for(; first <= second; ++first)
        sum3 += first;
    cout << "Sum of first to second inclusive is " << sum3 << endl;
    return 0;
}
