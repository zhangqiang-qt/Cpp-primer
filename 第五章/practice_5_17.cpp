#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> v1 = {0, 1, 2, 2};
    vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};

    auto it1 = v1.cbegin();
    auto it2 = v2.cbegin();

    while(it1 != v1.cend() && it2 != v2.cend()){
        if(*it1 != *it2){
            cout << "v1��v2֮��û��ǰ׺��ϵ." << endl;
            return -1;
        }
        ++it1;
        ++it2;
    }
    if(it1 == v1.cend())
        cout << "v1��v2��ǰ׺." << endl;
    if(it2 == v2.cend())
        cout << "v2��v1��ǰ׺." << endl;
    return 0;
}
