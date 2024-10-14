#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter even leength string: ";
    string s;
    getline(cin,s);
    int size = s.size();
    int half = size/2;
    reverse(s.begin()+half,s.end());
    cout<<s;
    return 0;
}