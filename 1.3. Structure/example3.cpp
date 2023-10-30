#include <iostream>

using namespace std;

struct Card{
    int face;    //4bytes
    int shape;   //4bytes
    int color;   //4bytes
};

int main(){
    struct Card deck[52] = {{1, 0, 0}, {2, 0, 0}, {1, 1, 0}, {2, 1, 0}};
    cout << deck[3].face << endl;
    cout << deck[3].shape << endl;
    cout << deck[3].color << endl;

    return 0;
}
