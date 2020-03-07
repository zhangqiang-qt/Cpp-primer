#include <iostream>
#include "Sales_data.h"

int main(){
    Sales_data total;
    cout << "输入第一本书信息: " << endl;
    if(cin >> total){
        Sales_data trans;
        cout << "输入其他书本信息: " << endl;
        while(cin >> trans){
            if(total.isbn() == trans.isbn())
                total += trans;
            else{
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else{
        cout << "没有数据" << endl;
        return -1;
    }
    return 0;
}
