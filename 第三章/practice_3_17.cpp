#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<string> vString;
    string s;
    char ch = 'y';
    cout << "Enter the first word: " << endl;
    while(cin >> s){
        vString.push_back(s);
        cout << "Do you want to continue? y or n" << endl;
        cin >> ch;
        if(ch != 'y' && ch != 'Y')
            break;
        cout << "Enter the next one: " << endl;
    }
    cout << endl;
    cout << "After changes, the result gets: " << endl;
    for(auto &mem : vString){
        for(auto &c : mem)
            c = toupper(c);
        cout << mem << endl;
    }
    cout << endl;
    return 0;
}
