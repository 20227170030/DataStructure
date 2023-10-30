#include <iostream>
using namespace std;

void fun(int a[], int n){
    a[0] = 15;
}

int main(){
    int a[] = {2, 4, 6, 8, 10};
    int size = sizeof(a) / sizeof(int);
    fun(a, size);

    for(int x:a)
        cout << x << endl;
    
    return 0;
}
