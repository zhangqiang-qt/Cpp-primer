#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> vInt;
    int i;
    cout << "Enter an array of numbers" << endl;
    while(cin >> i)
        vInt.push_back(i);
    if(vInt.size() == 0){
        cerr << "No elements!" << endl;
        return -1;
    }
    cout << "The sum of neighbor gets: " << endl;
    for(decltype(vInt.size()) i = 0; i < vInt.size(); i += 2)
        cout << vInt[i] + vInt[i + 1] << " ";
    if(vInt.size() % 2 != 0)
        cout << vInt[vInt.size() - 1];
    cout << endl;

    cout << "The sum of mirror gets: " << endl;
    for(decltype(vInt.size()) i = 0; i < vInt.size() / 2; i++)
        cout << vInt[i] + vInt[vInt.size() - i - 1] << " ";
    if(vInt.size() % 2 != 0)
        cout << vInt[vInt.size() / 2];
    cout << endl;
}
