#include <iostream>

using namespace std; 

int main(){
    int a[10] = {3, 6, 9, 12, 15};
    
    for (int x:a){
        cout << x << " ";
    }
    
    cout << endl;

    return 0;
}