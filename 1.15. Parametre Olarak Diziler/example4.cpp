#include <iostream>
using namespace std;

#define NUM 5

int* fun(){
    static int a[NUM];
    for(int i = 0; i < NUM; i++)
        a[i] = i + 1;
    return a;    
}

int main(){
    int *a = fun();
    for(int i = 0; i<NUM; i++){
        cout << a[i] << endl;
    }
    
    return 0;
}

