#include <iostream>
#include <string>

using namespace std;

string make_plural(size_t ctr, const string &word, const string &ending = "s"){
    return (ctr > 1) ? word + ending : word;
}

int main(){
    cout << "success 的单数形式是: " << make_plural(1, "success", "es") << endl;
    cout << "success 的复数形式是: " << make_plural(2, "success", "es") << endl;
    cout << "failure 的单数形式是: " << make_plural(1, "failure") << endl;
    cout << "failure 的复数形式是: " << make_plural(2, "failure") << endl;
    return 0;
}
