#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter your String: ";
    getline(cin,s);
    int i = 0;
    int j = s.size()-1;
    bool check = true;
    while(i<=j)
    {
        if(s[i]!=s[j])
        {   
            check = false;
            break;
        }
        i++;
        j--;
    }
    if(check==true)
        cout<<"String is pallindrome";
    else    
        cout<<"String is not a pallindrome..";
    return 0;
}