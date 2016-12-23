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
        cout << arreglo.back() << " " << arreglo.size() << endl;
    }
    input.close();
    return 0;
}
