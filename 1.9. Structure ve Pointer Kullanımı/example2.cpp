#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){

    struct Rectangle *p = new Rectangle {10, 5};  // dinamik olarak olusştutulmus bir degisken
    p->length = 20;
    cout << p-> length << endl;

    delete p;   //heapte olusturulan degisken silindi
    return 0;

}