#include <iostream>

using namespace std;

int main(){
    int sum = 0, first, second;
    cout << "����������������һ��С�ڵ��ڵڶ���:" << endl;
    cin >> first >> second;
    while(first <= second){
        sum += first;
        ++first;
    }
    cout << "Sum of first to second inclusive is " << sum << endl;
    return 0;
}
