#include<iostream>
#include<vector>

using namespace std;


int main(){
    vector<int> v1;
    cout << "The number of element of v1 is: " << v1.size() << endl;
    if(v1.size() > 0){
        cout << "The element of v1 is: " << endl;
        for(auto e : v1)
            cout << e << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> v2(10);
    cout << "The number of element of v2 is: " << v2.size() << endl;
    if(v2.size() > 0){
        cout << "The element of v2 is: " << endl;
        for(auto e : v2)
            cout << e << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> v3(10, 42);
    cout << "The number of element of v3 is: " << v3.size() << endl;
    if(v3.size() > 0){
        cout << "The element of v3 is: " << endl;
        for(auto e : v3)
            cout << e << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> v4{10};
    cout << "The number of element of v4 is: " << v4.size() << endl;
    if(v4.size() > 0){
        cout << "The element of v4 is: " << endl;
        for(auto e : v4)
            cout << e << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> v5{10, 42};
    cout << "The number of element of v5 is: " << v5.size() << endl;
    if(v5.size() > 0){
        cout << "The element of v5 is: " << endl;
        for(auto e : v5)
            cout << e << " ";
        cout << endl;
    }
    cout << endl;

    vector<string> v6{10};
    cout << "The number of element of v6 is: " << v6.size() << endl;
    if(v6.size() > 0){
        cout << "The element of v6 is: " << endl;
        for(auto e : v6)
            cout << e << " ";
        cout << endl;
    }
    cout << endl;

    vector<string> v7{10, "hi"};
    cout << "The number of element of v7 is: " << v7.size() << endl;
    if(v7.size() > 0){
        cout << "The element of v7 is: " << endl;
        for(auto e : v7)
            cout << e << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}
