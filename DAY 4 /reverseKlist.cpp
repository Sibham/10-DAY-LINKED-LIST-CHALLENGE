Node* kReverse(Node* head, int k) {
    if(head==NULL){
        return NULL;
    }
    
    //step1 - reverse first k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    while(curr!=NULL && count<k){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    
    //step2 recursion dheklega
    if(next!=NULL){
        head -> next = kReverse(next,k);
    }

    //step 3 return head
    return prev;
}
