#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle &rx){
    rx.length ++;
    return rx.length * rx.breadth;
}

int main(){
    Rectangle r = {10, 5};
    cout << "Alan: " << area(r) << endl;
    cout << "Uzunluk: " << r.length << endl;
    cout << "Genişlik: " << r.breadth << endl;
    return 0;
}