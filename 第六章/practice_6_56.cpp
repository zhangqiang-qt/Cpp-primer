#include <iostream>
#include <vector>

using namespace std;

int func1(int a, int b){
    return a + b;
}

int func2(int a, int b){
    return a - b;
}

int func3(int a, int b){
    return a * b;
}

int func4(int a, int b){
    return a / b;
}

//6.56
void compute(int a, int b, int (*p)(int, int)){
    cout << p(a, b) << endl;
}

int main(){
    decltype(func1) *p1 = func1, *p2 = func2, *p3 = func3, *p4 = func4;
    vector<decltype(func1)*> vF = {p1, p2, p3, p4};

    //6.56
    int i = 10, j = 5;
    for(auto p : vF)
        compute(i, j, p);
    return 0;
}
