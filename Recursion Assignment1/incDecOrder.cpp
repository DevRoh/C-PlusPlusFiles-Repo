#include<iostream>
using namespace std;
void inc(int n)
{
    if(n==0) return;
    inc(n-1);
    cout<<n<<" ";
    
}
void dec(int n)
{
    if(n==1) return;
    cout<<n-1<<" ";
    dec(n-1);
}
int main()
{
    int n = 5;
    inc(n);
    dec(n);
    return 0;
}