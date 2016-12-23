#include<iostream>
using namespace std;
int fibonacci(int N);
int main()
{
    int N;
    cin >> N;
    int fib;
    fib = fibonacci(N);
    cout << fib << endl;
    return 0;
}
int fibonacci(int N)
{
    if(N==1 || N==2)
        return 1;
    return fibonacci(N-1) + fibonacci(N-2);
}
