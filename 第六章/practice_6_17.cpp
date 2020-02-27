#include <iostream>
#include <string>

using namespace std;

bool HasUpper(const string &str){
    for(auto c : str)
        if(isupper(c))
            return true;
    return false;
}

void change(string &str){
    for(auto &c : str)
        c = tolower(c);
}
int main(){
    cout << "Enter a string: " << endl;
    string str;
    getline(cin, str);
    if(HasUpper(str)){
        change(str);
        cout << "After the change, the string is " << str << endl;
    }
    else
        cout << "The string without upper letter." << endl;
    return 0;
}
