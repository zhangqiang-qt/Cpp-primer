#include <iostream>

using namespace std;

int main(){
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    char ch;
    cout << "����һ���ı�:" << endl;
    while(cin >> ch){
        switch(ch){
        case 'A':
        case 'a':
            ++aCnt;
            break;
        case 'E':
        case 'e':
            ++eCnt;
            break;
        case 'I':
        case 'i':
            ++iCnt;
            break;
        case 'O':
        case 'o':
            ++oCnt;
            break;
        case 'U':
        case 'u':
            ++uCnt;
            break;
        }
    }
    cout << "������ı���Ԫ����ĸ a �ĸ����� " << aCnt << endl;
    cout << "������ı���Ԫ����ĸ e �ĸ����� " << eCnt << endl;
    cout << "������ı���Ԫ����ĸ i �ĸ����� " << iCnt << endl;
    cout << "������ı���Ԫ����ĸ o �ĸ����� " << oCnt << endl;
    cout << "������ı���Ԫ����ĸ u �ĸ����� " << uCnt << endl;
    return 0;
}
