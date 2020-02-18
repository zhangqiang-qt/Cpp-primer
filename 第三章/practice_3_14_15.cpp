#include<iostream>
#include<vector>

using namespace std;

int main(){
    //3.14
    vector<int> vInt;
    int i;
    char cont = 'y';
    while(cin >> i){
        vInt.push_back(i);
        cout << "Continue(y or n)?" << endl;
        cin >> cont;
        if(cont != 'y' && cont != 'Y')
            break;
    }
    for(auto mem : vInt)
        cout << mem << " ";
    cout << endl;

    //3.15
    vector<string> vString;
    string str;
    char ch = 'y';
    while(cin >> str){
        vString.push_back(str);
        cout << "Continue(y or n)?" << endl;
        cin >> ch;
        if(ch != 'y' && ch != 'Y')
            break;
    }
    for(auto mem : vString)
        cout << mem << " ";
    cout << endl;

    return 0;
}
