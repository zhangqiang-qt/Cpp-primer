#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item book;
    cout << "���������ۼ�¼: " << endl;
    while(cin >> book)
        cout << "ISBN, �۳�����, ���۶�, ƽ���ۼ�Ϊ: " << book << endl;
    return 0;
}
