#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
    const int sz = 5;
    int a[sz], b[sz], i;
    srand((unsigned)time(NULL));
    for(i = 0; i < sz; i++)
        a[i] = rand() % 10;
    cout << "Systematic data has existed, enter the numbers you guessed(0~9): " << endl;
    int u;
    for(i = 0; i < sz; i++)
        if(cin >> u)
            b[i] = u;
    cout << "The data made by system are: " << endl;
    for(auto t : a)
        cout << t << " ";
    cout << endl << endl;
    cout << "The data made by users are: " << endl;
    for(auto t : b)
        cout << t << " ";
    cout << endl << endl;

    int *p = begin(a), *q = begin(b);
    while(p != end(a) && q != end(b)){
        if(*p != *q){
            cerr << "These arrays are not equal." << endl;
            return -1;
        }
        ++p;
        ++q;
    }
    cout << "These arrays are equal." << endl;
    return 0;
}
