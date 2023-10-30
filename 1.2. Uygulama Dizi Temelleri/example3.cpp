#include <iostream>

using namespace std;

int main(){
    
    int a[10] = {2, 4, 6, 8, 10, 12, 14};  // dizi tanımlandıgı anda baslangic degeri verme isleminde eksik eleman bırakırsanız bu elemanlara 0 baslangic degeri verilir

    for (int i = 0; i < 10; i++){
        cout << a[i] << " ";
        cout << endl; 
    }
    return 0;
}
