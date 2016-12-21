#include<iostream>
using namespace std;
int main()
{
    bool respuesta; //declaracion
    respuesta = true; //definicion
    {
        if(respuesta)
        {
            respuesta = false;
        }
    }
    cout << respuesta; //false
    return 0;
}
