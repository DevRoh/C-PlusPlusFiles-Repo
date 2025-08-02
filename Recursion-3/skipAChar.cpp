#include<iostream>
#include<string>
using namespace std;
void skip(string res,string str, int idx) {
    if(idx>=str.length()) {
        cout<<res;
        return;
    }
    
    if(str[idx]!='a') res+=str[idx];
    skip(res,str,idx+1);
}
int main()
{
    string str = "snehaaadsd";
    skip("",str,0);
    return 0;
}