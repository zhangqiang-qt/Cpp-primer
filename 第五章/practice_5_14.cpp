#include<iostream>
#include<string>

using namespace std;

int main(){
    string currStr, preStr = "", maxStr;
    cout << "Enter a serious of words: " << endl;
    int currCnt = 1, maxCnt = 0;
    while(cin >> currStr){
        if(currStr == preStr){
            ++currCnt;
            if(currCnt > maxCnt){
                maxCnt = currCnt;
                maxStr = currStr;
            }
        }
        else
            currCnt = 1;
        preStr = currStr;
    }
    if(maxCnt > 1)
        cout << "The number of word which occurred max is: " << maxStr
             << ", " << maxCnt << " times." << endl;
    else
        cout << "Each word occurred just one time." << endl;
    return 0;
}
