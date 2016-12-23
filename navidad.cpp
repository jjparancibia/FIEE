#include<iostream>
using namespace std;
void funcion(); //prototipo
int main()
{
    funcion();
    return 0;
}
void funcion()
{
    cout << "Hola Mundo! :)" << endl;
    funcion();
}
