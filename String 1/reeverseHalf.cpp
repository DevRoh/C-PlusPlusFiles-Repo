#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    cout<<"Enter even length string: ";
    string s;
    getline(cin,s);
    int size = s.size();
    int half = size/2;
    reverse(s.begin()+0,s.begin()+half);
    cout<<s;
    cout<<half;
    return 0;
}