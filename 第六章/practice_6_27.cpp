#include <iostream>

using namespace std;

int iCount(initializer_list<int> i1){
    int Count = 0;
    for(auto c : i1)
        Count += c;
    return Count;
}
int main(){
    cout << "The sum of 1, 6, 9 is: " << iCount({1, 6, 9}) << endl;
    cout << "The sum of 4, 5, 9, 18 is: " << iCount({4, 5, 9, 18}) << endl;
    return 0;
}
