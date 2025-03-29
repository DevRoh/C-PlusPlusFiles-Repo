#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s = "AZYXBDJKY";
    string str="";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>='X')
        {
            str.push_back(s[i]);
        }
    }
    for(int i=0;i<str.length();i++)
    {
        bool flag = true;
        for(int j=0;j<str.length()-1-i;j++)
        {
            if(str[j]>str[j+1])
            {
                swap(str[i],str[i+1]);
                flag = false;
            }
        }
        if(flag==true) break;
    }
    cout<<str;
    return 0;
}