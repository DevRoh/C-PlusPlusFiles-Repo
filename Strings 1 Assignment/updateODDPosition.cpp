#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter your string: ";
    string s;
    getline(cin,s);
    for(int i=0;s[i]!='\0';i++)
    {
        if(i%2!=0)
            s[i] = '#';
    }
    cout<<s;
    return 0;
}