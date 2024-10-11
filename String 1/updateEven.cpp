#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of Element: ";
    cin>>n;
    char str[n];
    cout<<endl<<"Enter elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    for(int i=0;str[i]!='\0';i++)
    {
        if(i%2==0)
            str[i] = 'a';
    }
    cout<<str;
    return 0;
}