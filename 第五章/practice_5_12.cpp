#include<iostream>

using namespace std;

int main(){
    unsigned int ffCnt = 0, fiCnt = 0, flCnt = 0;
    char ch, prech = '\0';
    cout << "Enter a text: " << endl;
    while(cin >> ch){
        bool b1 = true;
        if(prech == 'f'){
            switch(ch){
            case 'f':
                ++ffCnt;
                b1 = false;
                break;
            case 'l':
                ++flCnt;
                break;
            case 'i':
                ++fiCnt;
                break;
            }
        }
        if(!b1)
            prech = '\0';
        else
            prech = ch;
    }
    cout << "The number of ff is: " << ffCnt << endl;
    cout << "The number of fl is: " << flCnt << endl;
    cout << "The number of fi is: " << fiCnt << endl;
    return 0;
}
