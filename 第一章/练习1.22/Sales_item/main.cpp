#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item total, trans;
    cout << "Enter several sales data with same ISBN: " << endl;
    if(cin >> total){
        while(cin >> trans){
            if(compareIsbn(total, trans))
                total = total + trans;
            else{
                cout << "ISBN are different" << endl;
                return -1;
            }
        }
        cout << "ISBN, sales count, income, avg price: " << total << endl;
    }
    else{
        cout << "No data" << endl;
        return -1;
    }
    return 0;
}
