#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle rx){
    return rx.length * rx.breadth;
}

int main(){
    Rectangle r = {10, 5};
    cout << "Dikdortgenin alani: " << area(r) << endl;
    return 0;
}