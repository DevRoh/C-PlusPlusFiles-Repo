#include<iostream>
using namespace std;
int main()
{
    string s;
    cout<<"Enter even number string: ";
    getline(cin,s);
    int size = s.size();
    int half = size/2;
    cout<<s.substr(half);
    return 0;
}