#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item trans1, trans2;
    cout << "Enter two sales data with same ISBN: " << endl;
    cin >> trans1 >> trans2;
    if(compareIsbn(trans1, trans2))
        cout << "ISBN, sales count, income, avg price: " << trans1 + trans2 << endl;
    else
        cout << "The ISBN is different" << endl;
    return 0;
}
