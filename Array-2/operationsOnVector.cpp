#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int>v;
    v.push_back(6);
    v.push_back(1);
    v.push_back(7);
    v.push_back(11);
    v.push_back(6);
    v.push_back(1);
    v.push_back(7);
    v.push_back(11);
    v.push_back(6);
    v.push_back(1);
    v.push_back(7);
    v.push_back(11);

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    v.pop_back(); 
    cout<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<" ";
    }

    cout<<endl;
    return 0;
}