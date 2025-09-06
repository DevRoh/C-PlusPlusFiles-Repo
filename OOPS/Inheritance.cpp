#include<iostream>
using namespace std;

class Human {

    protected:
    string name;
    int age,wt;
};

class Student: public Human {
    int roll,fees;
};

int main()
{
    Student A;

    return 0;
}