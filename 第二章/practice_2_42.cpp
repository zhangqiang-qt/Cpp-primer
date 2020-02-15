#include<iostream>
#include<string>
#include"Sales_data.h"

int main(){
    Sales_data book;
    cout << "Enter sale records: " << endl;
    while(cin >> book){
        cout << "ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ�Ϊ " << book <<endl;
    }

    Sales_data trans1, trans2;
    cout << "Enter two same ISBN sale records: " << endl;
    cin >> trans1 >> trans2;
    if(compareIsbn(trans1, trans2))
        cout << "������Ϣ:ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ�Ϊ " << trans1 + trans2 << endl;
    else
        cout << "�������ۼ�¼��ISBN��ͬ" << endl;

    Sales_data total, trans;
    cout << "Enter several same ISBN sale records: " << endl;
    if(cin >> total){
        while(cin >> trans){
            if(compareIsbn(total, trans))
                total = total + trans;
            else{
                cout << "��ǰ�鼮ISBN��ͬ" << endl;
                break;
            }
        }
        cout << "������Ϣ:ISBN���۳�������ԭʼ�۸�ʵ�ۼ۸��ۿ�Ϊ " << total <<endl;
    }
    else{
        cout << "û������" << endl;
        return -1;
    }

    int num = 1;
    cout << "Enter several sale records: " << endl;
    if(cin >> trans1){
        while(cin >> trans2){
            if(compareIsbn(trans1, trans2))
                num++;
            else{
                cout << trans1.isbn() << "����" << num << "�����ۼ�¼" << endl;
                trans1 = trans2;
                num = 1;
            }
        }
        cout << trans1.isbn() << "����" << num << "�����ۼ�¼" << endl;
    }
    else{
        cout << "û������" << endl;
        return -1;
    }
    return 0;
}
