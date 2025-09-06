#include<iostream>
using namespace std;

class Human {
    protected:
    string name;
    int age;

    public:
    void work(){
        cout<<"I am working.."<<endl;
    }
};

class Student: public Human {
    int roll_num, fees;
    public: 
    Student(string name,int age,int roll_num,int fees) {
        this->name = name;
        this->age = age;
        this->roll_num = roll_num;
        this->fees = fees;
    }
};

int main()
{
    Student A1("rohti",26,32,99);
    A1.work();
    
    return 0;
}