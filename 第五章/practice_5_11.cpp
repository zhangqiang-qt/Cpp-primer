#include <iostream>

using namespace std;

int main(){
    unsigned int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    unsigned int spaceCnt = 0, tabCnt = 0, newlineCnt = 0;
    char ch;
    cout << "输入一段文本:" << endl;
    while(cin.get(ch)){
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
        case ' ':
            ++spaceCnt;
            break;
        case '\t':
            ++tabCnt;
            break;
        case '\n':
            ++newlineCnt;
            break;
        }
    }
    cout << "输入的文本中元音子母 a 的个数是 " << aCnt << endl;
    cout << "输入的文本中元音子母 e 的个数是 " << eCnt << endl;
    cout << "输入的文本中元音子母 i 的个数是 " << iCnt << endl;
    cout << "输入的文本中元音子母 o 的个数是 " << oCnt << endl;
    cout << "输入的文本中元音子母 u 的个数是 " << uCnt << endl;
    cout << "空格的个数是 " << spaceCnt << endl;
    cout << "制表符的个数是 " << tabCnt << endl;
    cout << "换行符的个数是 " << newlineCnt << endl;
    return 0;
}
