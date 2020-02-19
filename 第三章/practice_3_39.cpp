#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main(){
    string str1, str2;
    cout << "1.Enter two strings:" << endl;
    cin >> str1 >> str2;
    if(str1 > str2)
        cout << "str1 is bigger than str2" <<endl;
    else if(str1 < str2)
        cout << "str1 is smaller than str2" <<endl;
    else
        cout << "str1 is equal to str2" <<endl;

    char s1[20], s2[20];
    cout << "2.Enter two strings:" << endl;
    cin >> s1 >> s2;
    auto result = strcmp(s1, s2);
    switch(result){
        case 1:
            cout << "str1 is bigger than str2" <<endl;
            break;
        case -1:
            cout << "str1 is smaller than str2" <<endl;
            break;
        case 0:
            cout << "str1 is equal to str2" <<endl;
            break;
        default:
            cout << "Not define!" << endl;
            break;
    }
    return 0;
}
