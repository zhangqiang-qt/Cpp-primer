#include <iostream>

using namespace std;

void Exchange(int *val1, int *val2){
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}

int main(){
    int i = 3, j = 4;
    int *p1 = &i, *p2 = &j;
    Exchange(p1,p2);
    cout << *p1 << " " << *p2 << endl;
    return 0;
}
