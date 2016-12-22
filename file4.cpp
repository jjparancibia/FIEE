#include<iostream>
using namespace std;
int main()
{
    char frase[10];
    cin >> frase;
    
    int key = 7;
    
    for(int i = 0 ; i < 10 ; i++)
        frase[i] = frase[i] + key;
    
    cout << frase;
    return 0;
}
