#include<iostream>
using namespace std;

class Customer{
    string name;
    int acc_num,bal;
    static int totalCustomer;

    public:
    Customer(string name,int acc_num,int bal) {
        this->name = name;
        this->acc_num = acc_num;
        this->bal = bal;
        totalCustomer++;
    }

    void display() {
        cout<<name<<" "<<acc_num<<" "<<bal<<" "<<totalCustomer<<endl;
    }
};

    int Customer :: totalCustomer = 0;
int main()
{
    Customer A1("Rohit",1,100);
    Customer A2("RMoit",1,1020);
    Customer A3("RMoit",1,1020  );

    A1.display();
    A2.display();
    A3.display();

    return 0;
}