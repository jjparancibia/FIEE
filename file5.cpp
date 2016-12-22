#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream archivo;
    archivo.open("ejemplo.txt");
    archivo << "Bienvenidos :D";
    archivo.close();
    return 0;
}
