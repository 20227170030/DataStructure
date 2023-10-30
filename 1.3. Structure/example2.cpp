#include <iostream>

using namespace std;

struct Card{
    int face;    //4bytes
    int shape;   //4bytes
    int color;   //4bytes
};

int main(){
    struct Card c;
    c.face = 1;
    c.shape = 0;
    c.color = 0;
    cout << c.face << endl;
    cout << c.shape << endl;
    cout << c.color << endl;
    
    return 0;
}

