#include<iostream>
#include<string>

using namespace std;

int main(){
    //3.6
    string s;
    cout << "Enter a string which can contain space: " << endl;
    getline(cin, s);
    for(auto &c : s)
        c = 'X';
    cout << s << endl;

    //3.7
    string s1;
    cout << "Enter a string which can contain space: " << endl;
    getline(cin, s1);
    for(char &c : s1)
        c = 'X';
    cout << s1 << endl;

    //3.8
    string s2, s3;
    cout << "Enter s2: " << endl;
    getline(cin, s2);
    for(unsigned int i = 0; i < s2.size(); i++)
        s2[i] = 'X';
    cout << s2 << endl;

    cout << "Enter s3: " << endl;
    getline(cin, s3);
    int i = 0;
    while(s3[i] != '\0'){
        s3[i] = 'X';
        i++;
    }
    cout << s3 << endl;
    return 0;
}
