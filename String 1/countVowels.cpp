#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    char str[n];
    for(int i=0;i<n;i++)
    {
        cin>>str[i];
    }
    int i = 0;
    int count = 0;
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i] == 'u')
            count++;
        i++;
    }
    cout<<"The number of vowels are: "<<count;
    return 0;
}