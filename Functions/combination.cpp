#include<iostream>
using namespace std;
int factorial(int x)
{
    int prod = 1;
    for(int i=1;i<=x;i++)
    {
        prod*=i;
    }
    return prod;
}
int combination(int n, int r)
{
    return (factorial(n)/(factorial(r)*factorial(n-r))); 

}
int main()
{
    int n,r;
    cin>>n>>r;
    int res = combination(n,r);
    cout<<res;
    
    return 0;
}