#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int value) {
        data = value;
        next = NULL;
    }
};

int main()
{
    int arr[] = {2,4,5,6};
    Node* head;
    head = NULL;
    for(int i=0;i<4;i++) {
        if(head==NULL) {
            head = new Node(arr[i]);
        }
        else {
            Node* tail;
            tail = head;
            while(tail->next!=NULL){
                tail = tail->next;
            }
            tail->next = new Node(arr[i]);
        }
    }


    if(head!=NULL) {
        if(head->next==NULL) {
            Node* temp = head;
            head = NULL;
            delete temp;
        }
        Node* curr;
        Node* prev;
        prev = NULL;
        curr = head;
        while(curr->next!=NULL) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        delete curr;
        
    }

    Node* temp;
    temp = head;
    while(temp!=NULL) {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}