#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char str1[] = "welcome to", str2[] = " c++ family!";
    char str[strlen(str1) + strlen(str2) - 1];
    strcpy(str, str1);
    strcat(str, str2);
    cout << "str1 is: " << str1 << endl;
    cout << "str2 is: " << str2 << endl;
    cout << "str is: " << str << endl;
    return 0;
}
