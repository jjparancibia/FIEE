#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arreglo;
    cout << arreglo.size() << endl;
    int num;
    while(cin>>num && num != 0)
    {
        arreglo.push_back(num);
        cout << arreglo.size() << endl;
    }
    return 0;
}
