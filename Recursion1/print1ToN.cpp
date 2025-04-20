// #include<iostream>
// using namespace std;
// void print(int i,int n)
// {
//     if(i>n) return;
//     cout<<i<<endl;
//     print(i+1,n);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     print(1,n);
//     return 0;
// }


//Without extra parameter
#include<iostream>
using namespace std;

void print(int n)
{
    if(n<1) return;
    print(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}