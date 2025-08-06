#include<iostream>
int gcd(int a,int b) {
    
    if(a==0) return b;
    else return gcd(b%a,a);
}
using namespace std;
int main()
{
    cout<<gcd(27,45);
    return 0;
}