#include <iostream>

using namespace std;

int main(){
    int sum = 0, val = 10;
    //只要val的值大于等于0，while循环就会持续执行
    while(val >= 0){
        sum += val;     //将 sum + val 赋予 sum
        --val;          //将 val 加 1
    }
    cout << "Sum of 1 to 10 inclusive is " << sum << endl;
    return 0;
}
