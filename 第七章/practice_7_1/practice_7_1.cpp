#include <iostream>
#include "Sales_data.h"

int main(){
    Sales_data total;
    cout << "�����һ������Ϣ: " << endl;
    if(cin >> total){
        Sales_data trans;
        cout << "���������鱾��Ϣ: " << endl;
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
        cout << "û������" << endl;
        return -1;
    }
    return 0;
}
