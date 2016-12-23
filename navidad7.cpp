#include<iostream>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
    vector<int> arreglo;
    cout << arreglo.size() << endl;
    int num;
    ifstream input;
    input.open("in.txt");
    while(input>>num && num != 0)
    {
        arreglo.push_back(num);
        cout << arreglo.back() << "\t" << arreglo.size() << endl;
    }
    input.close();
    //Busqueda
    int buscar;
    cin >> buscar;
    for(unsigned int i = 0 ; i < arreglo.size() ; i++)
    {
        if(buscar == arreglo[i])
        {
            cout << "Existe :D" << endl;
            break;
        }
    }
    //Eliminar el arreglo dinamico
    while(!arreglo.empty())
    {
        arreglo.pop_back();
    }

    return 0;
}
