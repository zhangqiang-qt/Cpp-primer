#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item trans1, trans2;
    int num = 1;
    cout << "Enter several sales data: " << endl;
    if(cin >> trans1){
        while(cin >> trans2){
            if(compareIsbn(trans1, trans2))
                num++;
            else{
                cout << trans1.isbn() << " have " << num << " sales data."<< endl;
                trans1 = trans2;
                num = 1;
            }
        }
        cout << trans1.isbn() << " have " << num << " sales data."<< endl;
    }
    else{
        cout << "No data" << endl;
        return -1;
    }
    return 0;
}
