#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item total;   //保存下一条交易记录的变量
    //读入第一条交易记录，确保有数据可以处理
    if(cin >> total){
        Sales_item trans;               //保存和的变量
        //读入并处理剩余交易记录
        while(cin >> trans){
            //处理相同的书
            if(total.isbn() == trans.isbn())
                total = total + trans;  //更新总销售额
            else{
                //打印前一本书的结果
                cout << total << endl;
                total = trans;          //表示下一本书
            }
        }
        cout << total << endl;          //打印最后一本书的结果
    }
    else{
        cout << "No data" << endl;
        return -1;
    }
    return 0;
}
