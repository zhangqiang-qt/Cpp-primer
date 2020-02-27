#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]){
    string str;
    for(int i = 0; i != argc; ++i)
        str += argv[i];
    cout << str << endl;
    cout << endl;
    //6.26
    for(int i = 0; i != argc; ++i)
        cout << "argv[" << i << "]: " << argv[i] << endl;
    return 0;
}
