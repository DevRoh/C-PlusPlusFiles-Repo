#include<iostream>
using namespace std;

// void fun(int n)
// {
//     if(n==0) return;
//     cout<<"Hello world"<<endl;
//     fun(n-1);
// }
void gm(int n)
{
    if(n==0) return;
    cout<<"Good morning"<<endl;
    gm(n-1);
}
int main()
{
    // fun(3);
    int n;
    cin>>n;
    gm(n);

    return 0;
}