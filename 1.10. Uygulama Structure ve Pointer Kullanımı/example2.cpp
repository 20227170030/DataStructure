#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main(){
    Rectangle r = {10, 5};
    cout << r.breadth << endl;
    cout << r.length << endl;

    Rectangle *p = &r;
    cout << p-> breadth << endl;
    cout << p-> length << endl;


    return 0;
}