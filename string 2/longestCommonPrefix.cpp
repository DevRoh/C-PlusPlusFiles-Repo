#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<string>v;

    v.push_back("flower");
    v.push_back("flow");
    v.push_back("flight");

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort(v.begin(),v.end()); //lexographically
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}