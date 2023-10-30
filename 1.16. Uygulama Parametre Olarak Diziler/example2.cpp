#include <iostream>
using namespace std;

void fun(int *a){
    cout << sizeof(a)/sizeof(int) << endl;
}

int main(){
    int a[] = {2, 4, 6, 8, 10};

    fun(a);

    return 0;
}