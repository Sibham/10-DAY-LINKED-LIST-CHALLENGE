#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtPosition(Node* &head, int position, int d) {
    // agar position 1 hai toh head pe insert karo
    if (position == 1) {
        Node* temp = new Node(d);
        temp->next = head;
        head = temp;
        return;
    }

    Node* temp = head;
    int cnt = 1;
    while (cnt < position - 1 && temp != NULL) {
        temp = temp->next;
        cnt++;
    }

    // agar temp NULL ho gaya toh position list ke bahar hai
    if (temp == NULL) {
        cout << "Position out of range!" << endl;
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void InsertAtHead(Node *&head,int d){
    Node *temp = new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtTail(Node *&tail, int d){
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

    Node* head = node1;
    Node* tail = node1;

    InsertAtTail(tail, 20);
    print(head);

    InsertAtTail(tail, 30);
    print(head);

    InsertAtTail(tail, 40);
    print(head);

    insertAtPosition(head, 4, 50);  // 4th position pe insert
    print(head);

    insertAtPosition(head, 1, 5);   // head pe insert
    print(head);

    insertAtPosition(head, 10, 99); // out of range test
    print(head);

    cout<<"head: "<<head->data<<endl;
    cout<<"tail: "<<tail->data<<endl;

    return 0;
}
