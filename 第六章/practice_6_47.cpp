#include <iostream>
#include <vector>

using namespace std;

void Print(vector<int> v, unsigned index){
    unsigned sz = v.size();
    #ifndef NDEBUG
    cout << "vector 对象的大小是: " << sz << endl;
    #endif
    if(!v.empty() && index < sz){
        cout << v[index++] << endl;
        Print(v, index);
    }
}
int main(){
    vector<int> vInt = {2, 4, 6, 8, 10, 12, 14, 18};
    Print(vInt, 0);
    return 0;
}
