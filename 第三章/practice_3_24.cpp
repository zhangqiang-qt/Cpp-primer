#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vInt;
    int i;
    cout << "Enter an array of numbers" << endl;
    while(cin >> i)
        vInt.push_back(i);
    if(vInt.cbegin() == vInt.cend()){
        cerr << "No elements!" << endl;
        return -1;
    }
    cout << "The sum of neighbor gets: " << endl;
    for(auto it = vInt.begin(); it != vInt.end(); it++)
        cout << *it + *(++it) << " ";
    if(vInt.size() % 2 != 0)
        cout << *(vInt.end() - 1);
    cout << endl;

    cout << "The sum of mirror gets: " << endl;
    auto beg = vInt.begin();
    auto en = vInt.end();
    for(auto it = beg; it != beg + (en - beg) / 2; it++)
        cout << (*it + *(beg + (en - it) - 1)) << " ";
    if(vInt.size() % 2 != 0)
        cout << *(beg + (en - beg) / 2);
    cout << endl;
}
