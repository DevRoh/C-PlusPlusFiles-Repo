#include<iostream>
using namespace std;

class Customer {
    string name;
    int acc_num;
    int bal;

    public:
    //Default constructor
    Customer() {
        cout<<"Hello"<<endl;
    }

    //Paramerterized Constructor

    Customer(string name,int acc_num,int bal) {
        this->name = name;
        this->acc_num = acc_num;
        this->bal = bal;
    }

    //Constructor Overloading

    Customer(string name,int acc_num) {
        this->name = name;
        this->acc_num = acc_num;
    }


    void display() {
        cout<<name<<" "<<acc_num<<" "<<bal<<endl;
    }

    //Inline constructor
    

    //Copy constructor


};

int main()
{
    Customer C1;
    Customer C2("Rohit",123,1000);
    Customer C3("Saikat",142);
    Customer C4(C2); // Default Copy constructor
    
    C2.display();
    C3.display();
    C4.display();
    return 0;
}