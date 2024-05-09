SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    if(head == nullptr)
    {
        return new SinglyLinkedListNode(data);
    }
    
    head->next = insertNodeAtTail(head->next,data);
    
    return head;
}