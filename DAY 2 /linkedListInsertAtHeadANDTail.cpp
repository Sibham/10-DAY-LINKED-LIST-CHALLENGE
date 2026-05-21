#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;   // next pointer ko initialize
    }
};

void InsertAtHead(Node *&head,int d){
    //creating a new node
    Node *temp = new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node *&tail, int d){
    //creating a new node
    Node *temp = new Node(d);
    tail->next=temp;
    tail = tail ->next;
}

void print(Node *&head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main() {
    Node *node1 = new Node(10);
    // cout << "Data: " << node1->data << endl;
    // cout << "Next: " << node1->next << endl; // NULL print hoga (0 ya nullptr)


    // Node* head = node1;
    // print(head);

    // //InsertAtHead(head, 20);
    // //print(head);

    // InsertAtHead(head, 30);
    // print(head);

    
    Node* head = node1;
    Node* tail = node1;
    InsertAtTail(tail, 20);
    print(head);

    InsertAtTail(tail, 30);
    print(head);

    InsertAtTail(tail, 40);
    print(head);

    

    return 0;
}
