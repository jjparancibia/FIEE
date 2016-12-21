#include<iostream>
using namespace std;
int main()
{
    bool respuesta; //declaracion
    respuesta = true; //definicion
    {
        bool respuesta = false; //inicializacion
    }
    if(respuesta)
    {
        cout << "Dentro del if";
    }
    return 0;
}
