#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
} r1, r2, r3;   //global struct tanımlamanın bir diger yolu ise dogrudan struct ifadesinden sonra degiskeni kullanmaktiee


void fun(){
    r1 = {10, 20};
    r2 = {30, 40};
    r3 = {50, 60};
}

int main(){
    //fun içinde r1, r2, r3 değişti
    fun(); 

    cout << r1.length << " " << r1.breadth << endl;
    cout << r2.length << " " << r2.breadth << endl;
    cout << r3.length << " " << r3.breadth << endl;

    //main içinde r1, r2, r3 degeri degisti
    r1 = {50, 60};
    r1 = {70, 80};
    r1 = {90, 10};

    cout << r1.length << " " << r1.breadth << endl;
    cout << r2.length << " " << r2.breadth << endl;
    cout << r3.length << " " << r3.breadth << endl;

    return 0;
}
