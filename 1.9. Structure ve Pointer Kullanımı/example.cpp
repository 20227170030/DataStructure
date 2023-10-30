#include <iostream>

using namespace std;

struct Rectangle
{
    int lenght;
    int breadth;
};

int main(){
    struct Rectangle r = {10, 5};
    struct Rectangle *p = &r;
    r.lenght = 15;
    p->lenght = 20;   // (*p).lenght = 20 karşılıgıdir
    cout << r.lenght << endl;

    return 0;
}









