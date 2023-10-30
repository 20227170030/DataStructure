#include <iostream>

using namespace std;

int main(){
    int a[5] = {2, 4, 6, 8, 10};
    int *p;
    p = a;      //birinci secenek 
    p = &a[0];  //ikinci secenek

    cout << *p << endl;

    return 0;

}
