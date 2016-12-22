#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double x, cosx = 0.0;
    int N;
    while(cin>>x>>N && (x != 0 || N != 0))
    {
        for(int i = 0 ; i < N ; i++)
        {
            double A = 1.0, B = 1.0;
            for(int k = 0 ; k < 2*i ; k++)
                A = A * x;
            if(i%2 != 0)
                A = A * (-1.0);
            for(int j = 1 ; j <= 2*i ; j++)
                B = B * j;
            cosx = cosx + A/B;
        }
        cout << cosx << endl;
        cosx = 0.0;
    }
    return 0;
}
