#include <iostream>
using namespace std;

void fun(int *p, int n){
    for (int i = 0; i < n; i++)
        cout << *(p+i) << endl;
}

int main(){
    int a[] = {2, 4, 6, 8, 10};
    int size = sizeof(a) / sizeof(int);
    fun(a, size);
    
    return 0;
}
