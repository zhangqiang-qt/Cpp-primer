#include <iostream>

using namespace std;

int main(){
    int sum = 0, val = 10;
    //ֻҪval��ֵ���ڵ���0��whileѭ���ͻ����ִ��
    while(val >= 0){
        sum += val;     //�� sum + val ���� sum
        --val;          //�� val �� 1
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}
