#include<iostream>
#include<ctime>
#include<cstdlib>
#include<vector>

using namespace std;

int main(){
    const int sz = 5;
    int i;
    vector<int> a, b;
    srand((unsigned)time(NULL));
    for(i = 0; i < sz; i++)
        a.push_back(rand() % 10);
    cout << "Systematic data has existed, enter the numbers you guessed(0~9): " << endl;
    int u;
    for(i = 0; i < sz; i++)
        if(cin >> u)
            b.push_back(u);
    cout << "The data made by system are: " << endl;
    for(auto t : a)
        cout << t << " ";
    cout << endl << endl;
    cout << "The data made by user are: " << endl;
    for(auto t : b)
        cout << t << " ";
    cout << endl << endl;

    auto it1 = a.cbegin(), it2 = b.cbegin();
    while(it1 != a.cend() && it2 != b.cend()){
        if(*it1 != *it2){
            cerr << "These arrays are not equal." << endl;
            return -1;
        }
        it1++;
        it2++;
    }
    cout << "These arrays are equal." << endl;
    return 0;
}
