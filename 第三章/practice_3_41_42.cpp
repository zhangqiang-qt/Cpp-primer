#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    //3.41
    const int sz = 10;
    int a[sz];
    srand((unsigned)time(NULL));
    cout << "The array is: " << endl;
    for(auto &c : a){
        c = rand() % 100;
        cout << c << " ";
    }
    cout << endl << endl;

    vector<int> vInt(begin(a), end(a));
    cout << "The content of vector is: " << endl;
    for(auto c : vInt)
        cout << c << " ";
    cout << endl << endl;

    //3.42
    auto it = vInt.cbegin();
    int b[vInt.size()];
    cout << "After copy from vector, the array is:" << endl;
    for(auto &c : b){
        c = *it;
        cout << c << " ";
        it++;
    }
    cout << endl;
    return 0;
}
