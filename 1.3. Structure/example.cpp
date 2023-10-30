#include <iostream>
using namespace std;


struct Rectangle{
    int length;  // 2bytes
    int breadth;  //2bytes
};

int main(){
    struct Rectangle r = {10, 5};   //(lenght=10, breadth=5 r degiskeninin başlangic değeri)
    r.length = 15;
    r.breadth = 10;
    cout << "Dikdörtgenin alani: " << (r.length * r.breadth) << endl;
    
    return 0;
}
