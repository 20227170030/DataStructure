#include <iostream>
using namespace std;

int main(){
    int *p = new int[5] {10, 20, 30, 40, 50};
    for (int i=0; i<5; i++)
        cout<< *(p+i) << endl;

    //dinamik degisken hafızadan silindi
    delete [] p;  //heap alanındaki degisken dizi ise delete ifadesinden sonra [] sembolu gelir
    return 0;

}