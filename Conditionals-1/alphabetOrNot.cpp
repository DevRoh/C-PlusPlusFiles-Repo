#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character: ";
    cin>>ch;
    if(((int)ch>=65 && (int)ch<=90) || ((int)ch>=97 && (int)ch<=122))
    cout<<ch<<" is alphabet and it's ASCII value is: "<<(int)ch;
    else
    cout<<"Error";
    return 0;
}