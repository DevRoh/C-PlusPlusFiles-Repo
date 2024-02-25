#include<iostream>
using namespace std;
int main()
{
    int x = 10;
    int* p = &x;
    cout<<*p<<endl; 
    *p = 80;
    cout<<x;
    return 0;
}