#include <iostream>
#include "Sales_item.h"

using namespace std;

int main(){
    Sales_item total;   //������һ�����׼�¼�ı���
    //�����һ�����׼�¼��ȷ�������ݿ��Դ���
    if(cin >> total){
        Sales_item trans;               //����͵ı���
        //���벢����ʣ�ཻ�׼�¼
        while(cin >> trans){
            //������ͬ����
            if(total.isbn() == trans.isbn())
                total = total + trans;  //���������۶�
            else{
                //��ӡǰһ����Ľ��
                cout << total << endl;
                total = trans;          //��ʾ��һ����
            }
        }
        cout << total << endl;          //��ӡ���һ����Ľ��
    }
    else{
        cout << "No data" << endl;
        return -1;
    }
    return 0;
}
