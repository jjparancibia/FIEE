#include<iostream>
using namespace std;
int funcion(); //prototipo
int main()
{
    int r;
    r = funcion();
    cout << r << endl;
    return 0;
}
int funcion()
{
    int val = 10;
    cout << "Hola Mundo! :)" << endl;
    return val;
}
