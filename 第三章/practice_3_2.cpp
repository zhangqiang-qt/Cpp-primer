#include<iostream>
#include<string>

using namespace std;

int main(){
    string word, line;
    cout << "选择输入方式: 1.按行输入 or 2.逐词输入" << endl;
    char ch;
    cin >> ch;
    if(ch == '1'){
        cout << "按行输入: " << endl;
        while(getline(cin,line)){
        cout << line << endl;
        }
        cout << endl;
        return 0;
    }
    else if(ch == '2'){
        cout << "逐词输入: " << endl;
        while(cin >> word){
        cout << word << endl;
        }
        cout << endl;
        return 0;
    }
    else
        cerr << "Error!" << endl;
    return -1;
}
