#include <iostream>

using namespace std;

int main(){
    int sum = 0, val = 50;
    //ֻҪval��ֵС�ڵ���100��whileѭ���ͻ����ִ��
    while(val <= 100){
        sum += val;     //�� sum + val ���� sum
        ++val;          //�� val �� 1
    }
    cout << "Sum of 50 to 100 inclusive is " << sum << endl;
    return 0;
}
