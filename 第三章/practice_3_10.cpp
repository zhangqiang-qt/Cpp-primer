#include<iostream>
#include<string>
#include<cctype>

using namespace std;

int main(){
    string s("Here are!!! some strings, and punctuations..");
    cout << s << endl;
    for(auto c : s){
        if(!ispunct(c))
            cout << c;
    }
    cout << endl << endl;

    string s2("Here are!!! some strings, and punctuations.."), result;
    cout << s2 << endl;
    for(decltype(s2.size()) i = 0; i < s2.size(); i++){
        if(!ispunct(s2[i]))
            result += s2[i];
    }
    cout << result << endl;
    return 0;
}
