#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream archivo;
    string texto;
    archivo.open("ejemplo.txt");
    getline(archivo,texto);
    cout << texto << endl;
    archivo.close();
    return 0;
}
