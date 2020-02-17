#include<iostream>
#include<string>

using namespace std;

int main(){
    string s1, s2;
    cout << "Enter two strings" << endl;
    cin >> s1 >> s2;
    if(s1 == s2)
        cout << "These strings are equality!" << endl;
    else if(s1 > s2)
        cout << s1 << " is bigger than " << s2 << endl;
    else
        cout << s1 << " is smaller than " << s2 << endl;

    auto len1 = s1.size();
    auto len2 = s2.size();
    if(len1 == len2)
        cout << "The length of two strings are equality!" << endl;
    else if(len1 > len2)
        cout << "The length of " << s1 << " is " << len1
             << ", and longer than " << s2 << " which length is " << len2 << endl;
    else
        cout << "The length of " << s1 << " is " << len1
             << ", and shorter than " << s2 << " which length is " << len2 << endl;

    return 0;
}
