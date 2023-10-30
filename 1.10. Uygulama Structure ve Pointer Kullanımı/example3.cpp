#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    Rectangle *p = new Rectangle {10, 5};
    p-> length =15;
    p-> breadth = 7;

    cout << p-> length << endl;
    cout << p -> breadth << endl;

    delete p;
    return 0;
}