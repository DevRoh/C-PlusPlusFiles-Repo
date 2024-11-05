#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    string s[] = {"A","Z","Y","Z","X","B","D","J","K","X"};
    vector<string>str;
    for(int i=0;i<10;i++)
    {
        if(!(s[i]<"X"))
            str.push_back(s[i]);
    }
    for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }

    //Sorting
    for(int i=0;i<str.size()-1;i++)
    {
        bool flag = true;
        for(int j=0;j<str.size()-1-i;j++)
        {
            if(str[j]<str[j+1])
                {
                    swap(str[j],str[j+1]);
                    flag = false;
                }
        }
        if(flag==true) break;
    }

    cout<<"After Sorting: ";
     for(int i=0;i<str.size();i++)
    {
        cout<<str[i]<<" ";
    }


    return 0;
}