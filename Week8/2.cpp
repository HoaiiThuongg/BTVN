SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);    
    if(head == nullptr)
    {
        head = newNode;
        return head;
    }
    
    SinglyLinkedListNode* now = head;
    while(now->next!= nullptr)
    {
        now = now->next;
    }
    
    now->next = newNode;
    
    return head;
}