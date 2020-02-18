#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(){
    vector<int> v1;
    cout << "The number of element of v1 is: " << v1.size() << endl;
    if(v1.cbegin() != v1.cend()){
        cout << "The element of v1 is: " << endl;
        for(auto it = v1.cbegin(); it != v1.cend(); it++)
            cout << *it << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> v2(10);
    cout << "The number of element of v2 is: " << v2.size() << endl;
    if(v2.cbegin() != v2.cend()){
        cout << "The element of v2 is: " << endl;
        for(auto it = v2.cbegin(); it != v2.cend(); it++)
            cout << *it << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> v3(10, 42);
    cout << "The number of element of v3 is: " << v3.size() << endl;
    if(v3.cbegin() != v3.cend()){
        cout << "The element of v3 is: " << endl;
        for(auto it = v3.cbegin(); it != v3.cend(); it++)
            cout << *it << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> v4{10};
    cout << "The number of element of v4 is: " << v4.size() << endl;
    if(v4.cbegin() != v4.cend()){
        cout << "The element of v4 is: " << endl;
        for(auto it = v4.cbegin(); it != v4.cend(); it++)
            cout << *it << " ";
        cout << endl;
    }
    cout << endl;

    vector<int> v5{10, 42};
    cout << "The number of element of v5 is: " << v5.size() << endl;
    if(v5.cbegin() != v5.cend()){
        cout << "The element of v5 is: " << endl;
        for(auto it = v5.cbegin(); it != v5.cend(); it++)
            cout << *it << " ";
        cout << endl;
    }
    cout << endl;

    vector<string> v6{10};
    cout << "The number of element of v6 is: " << v6.size() << endl;
    if(v6.cbegin() != v6.cend()){
        cout << "The element of v6 is: " << endl;
        for(auto it = v6.cbegin(); it != v6.cend(); it++)
            cout << *it << " ";
        cout << endl;
    }
    cout << endl;

    vector<string> v7{10, "hi"};
    cout << "The number of element of v7 is: " << v7.size() << endl;
    if(v7.cbegin() != v7.cend()){
        cout << "The element of v7 is: " << endl;
        for(auto it = v7.cbegin(); it != v7.cend(); it++)
            cout << *it << " ";
        cout << endl;
    }
    cout << endl;
    return 0;
}
