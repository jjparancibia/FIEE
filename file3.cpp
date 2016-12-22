#include<iostream>
using namespace std;
int main()
{
    int n = 10;
    int v[n];
    //Ingreso de valores
    for(int i = 0 ; i < n ; i++)
        cin >> v[i];
    
    for(int i = 0 ; i < n ; i++)
        v[i] = v[i] * v[i];
    
    //Impresion de valores
    for(int i = 0 ; i < n ; i++)
        cout << v[i] << " ";
    return 0;
}
