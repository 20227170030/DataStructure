#include <iostream>
using namespace std;

void fun(int a[], int n){  //call by addres
    for(int i = 0; i<n; i++){
        cout << a[i] << endl;
    }  
}


int main(){
    int a[5] = {2, 4, 6, 8, 10};
    fun(a, 5);   //call by addres
    
    return 0;
}

/*diziler fonksiyona parametre olarak gonderildiginde call by value
yapılmaz, call by address olarak gonderilir.*/
