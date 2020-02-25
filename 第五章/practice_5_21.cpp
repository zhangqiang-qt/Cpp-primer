#include<iostream>
#include<string>

using namespace std;

int main(){
    string currStr, preStr;
    bool b1 = true;
    cout << "Enter a serious of strings: " << endl;
    while(cin >> currStr){
        //continue为5.21的实现要求
        if(!isupper(currStr[0]))
            continue;
        if(currStr == preStr){
            b1 = false;
            cout << "The string that constantly appeared is: " << currStr << endl;
            break;
        }
        preStr = currStr;
    }
    if(b1)
        cout << "Each word occurred just one time." << endl;
    return 0;
}
