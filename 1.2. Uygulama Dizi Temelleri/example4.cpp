#include <iostream>

using namespace std; 

int main(){
    int a[10] = {0}; // diziye baslangic degeri {0} verilrise tüm elemanlara 0 degeri atanır
    
    for (int i = 0; i< 10; i++){
        cout << a[i] << " " ;
    }
    cout << endl;

    return 0;
}