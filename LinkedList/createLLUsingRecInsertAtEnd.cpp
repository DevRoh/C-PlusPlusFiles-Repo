#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* CreateLL(int arr[],int idx,int size) {
    if(idx==size) return NULL;
    Node* temp;
    temp = new Node(arr[idx]);
    temp->next = CreateLL(arr,idx+1,size);

    return temp;
}

int main()
{
    int arr[] = {1,2,3,4,5};

    Node* Head;
    Head = NULL;
    Head = CreateLL(arr,0,5);

    Node* temp;
    temp = Head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}