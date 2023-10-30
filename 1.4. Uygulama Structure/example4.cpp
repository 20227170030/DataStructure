#include <iostream>
using namespace std;

struct Rectangle1
{
    double color;
    int length;
    int breadth;
};

struct Rectangle2
{
    int length;
    double color;
    int breadth;
};

struct Rectangle3
{
    int length;
    int breadth;
    double color;
};

int main(){
    struct Rectangle1 r1 = {0.1, 10, 5};
    struct Rectangle2 r2 = {10, 0.1, 5};
    struct Rectangle3 r3 = {10, 5, 0.1};

    cout << sizeof(r1) << endl;
    cout << sizeof(r2) << endl;
    cout << sizeof(r3) << endl;

    return 0;
}

