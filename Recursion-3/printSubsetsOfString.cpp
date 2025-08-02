#include<iostream>
using namespace std;
void printSubset(string ans,string original,int idx) {
	if(idx==original.length()) {
		cout<<ans<<endl;
		return;
	}
	printSubset(ans+original[idx],original,idx+1);
	printSubset(ans,original,idx+1);
}
int main() {
	printSubset("","abc",0);
}

