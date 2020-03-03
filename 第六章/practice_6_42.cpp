#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s"){
    return (ctr > 1) ? word + ending : word;
}

int main(){
    cout << "success �ĵ�����ʽ��: " << make_plural(1, "success", "es") << endl;
    cout << "success �ĸ�����ʽ��: " << make_plural(2, "success", "es") << endl;
    cout << "failure �ĵ�����ʽ��: " << make_plural(1, "failure") << endl;
    cout << "failure �ĸ�����ʽ��: " << make_plural(2, "failure") << endl;
    return 0;
}
