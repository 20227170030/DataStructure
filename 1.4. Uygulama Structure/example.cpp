#include <iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

int main(){
    struct Rectangle r1 { 10, 20};

    cout << r1.length << endl;
    cout << r1.breadth << endl;

    return 0; 
}

