#include <iostream>
using namespace std;

void tukar(int &x, int &y, int &z);

int main(){
    int x, y, z;
    x = 10;
    y = 20;
    z = 30;
    cout << "Nilai sebelum ditukar" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    tukar(x, y, z);
    cout << "\nNilai setelah ditukar" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    return 0;
}

void tukar(int &x, int &y, int &z){
    int temp;
    temp = z;
    z = y;
    y = x;
    x = temp;
}