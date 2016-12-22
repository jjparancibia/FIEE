#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x, senx = 0.0;
    int N;
    //INPUT
    cin >> x >> N;
    //OUTPUT
    for(int i = 0 ; i < N ; i++)
    {
        double A, B = 1.0;
        A = pow(-1,i) * pow(x,2*i+1);
        for(int j = 1; j <= 2*i+1 ; j++)
            B = B*j;
        senx = senx + A/B;
    }
    cout << senx << endl;
    return 0;
}
