#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int roll;
    string grade;
    public:
    //Function Getter and Setter
    void setName(string s) {
        name = s;
    }
    void setAge(int a) {
        name = a;

    }
    void setGrade(string g) {
        grade = g;
    }

    //Getter
    void getName() {
        cout<<name;
    }
}; 

int main()
{
    Student S1;
    // S1.name = "Rohit";
    // S1.grade = 'A';
    // S1.roll = 10;
    // cout<<S1.roll;
    S1.setAge(12);
    S1.setGrade("A");
    S1.setName("Rohit");

    S1.getName();

    Student *s = new Student;
    (*s).name = "Rohit";
    s->roll = 21;
    cout<<s->roll;


    return 0;
}