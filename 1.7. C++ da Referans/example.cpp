#include <iostream>

using namespace std;

int main(){
    int a = 10;
    int &r = a;   //referans tipi degisken tanımlanırken basina & isareti konur.

    cout << a << endl;  //ekrana 10 yazar
    r++;
    cout << r << endl;      //ekrana 11 yazar
    cout << a << endl;      //ekrana 11 yazar
    cout << &r << endl;     //aynı adresi yazar
    cout << &a << endl;     //aynı adresi yazar
    
    return 0;

}