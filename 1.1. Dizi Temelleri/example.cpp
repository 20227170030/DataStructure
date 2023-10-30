#include <iostream>
using namespace std;

int main(){
    int a[10];
    // Dizi uzunluğu bulunuyor.
    int m = sizeof(a)/sizeof(a[0]);    //Sizeof: bir nesnenin bellekte kaç byte yer kapladığı değerini üretir
    cout << "a dizisi: " << m << endl;

    int b[5]={2, 4, 6, 8, 10};
    // Dizi uzunluğu bulunuyor.
    int n = sizeof(b)/ sizeof(b[0]);
    cout << "b dizisi: " << n << endl;

    for (int i = 0; i < n; i++ ){
        cout << b[i] << endl;
    }
    
    return 0;

}