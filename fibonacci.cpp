#include <bits/stdc++.h>
using namespace std;
//return fibonacci number sum till n.(a.j)
int fibonacci (int n)
{
    if(n<=1)
    return n;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(void)
{

    int n;
    cin >> n;
    cout<<fibonacci(n);//function will return value of nth fibonacci value
}