#include<iostream>
using namespace std;
void printSubDup(string str,string res,bool flag) {
    if(str.length()==0) {
        cout<<res<<" ";
        return;
    }
    char ch = str[0];
    if(str.length()==1) {
        printSubDup(str.substr(1),res+ch,true);
        printSubDup(str.substr(1),res,true);
        return;
    }
    char dh = str[1];
    if(ch==dh) {
        if(flag==true) printSubDup(str.substr(1),res+ch,true);
        printSubDup(str.substr(1),res,false);
    }
    else {
        if(flag==true) printSubDup(str.substr(1),res+ch,true);
        printSubDup(str.substr(1),res,true);
    }
    
}
int main()
{
    string str = "aab";
    printSubDup(str,"",true);
    return 0;
}