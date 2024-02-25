#include<iostream>
using namespace std;
int main()
{
//    int a = 10;
//    int* p1 = &a;
//    int b = 20;
//    int* p2 = &b;
//    int sum = *p1 + *p2;
//    cout<<sum;

    
      int a,b;
      int* p1 = &a;
      int* p2 = &b;
      cout<<"Enter your first number: ";
      cin>>*p1;
      cout<<"Enter your second number: ";
      cin>>*p2;
      cout<<"Sum is: "<< *p1+ *p2;
    return 0;
}