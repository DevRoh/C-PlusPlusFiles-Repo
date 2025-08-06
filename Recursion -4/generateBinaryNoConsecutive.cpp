#include<iostream>
using namespace std;
void generate(string s,int n) {
    if(s.length()==n) {
        cout<<s<<endl;
        return;
    }
    if(s.length()==0 || s[s.length()-1]=='0') {
        generate(s+'0',n);
        generate(s+'1',n);
    }
    else if(s[s.length()-1]=='1') { 
        generate(s+'0',n);
    }
}
int main()
{
    int n = 3;
    generate("",3);
    return 0;
}