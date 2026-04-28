#include<iostream>

using namespace std;

int main(){
    int a = 10, b = 5;
    cout << "Suma: " << a + b << endl;

    bool c = a < b;
    bool d = a > b;

    cout << "Resultado " << c << endl << d << endl;

    cout << sizeof(c) << endl;
    int edades[] = {24, 40, 7};
    cout << sizeof(edades) << endl << sizeof(edades[0]) << endl << sizeof(edades) / sizeof(edades[0]) << endl;
    return 0;
}