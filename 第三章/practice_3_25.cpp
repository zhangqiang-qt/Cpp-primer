#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<unsigned> v(11);
    auto it = v.begin();
    int i;
    cout << "Enter the grades(0~100): " << endl;
    while(cin >> i){
        if(i <= 100)
            ++*(it + i / 10);
    }
    cout << "The number of the grades is: " << v.size() << endl;
    cout << "The divide of each part of student is: " << endl;
    for(it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;
    return 0;
}
