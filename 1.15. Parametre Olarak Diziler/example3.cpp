#include <iostream>
using namespace std;

void fun(int *p, int n){  
    for(int i = 0; i<n; i++){
       cout << *(p+i) << endl;
    }  
}  

int main(){
    int a[5] = {2, 4, 6, 8, 10};
    fun(a, 5);   

    return 0;
}
