ListNode* removeElements(ListNode* head, int val) {
    if (head==NULL){
        return head;
    }
    ListNode* p=head;
    while(p->next!=NULL){
        if (p->next->val == val){
            ListNode* temp = p->next;
            p->next = p->next->next;
            delete temp;
        }
        else{
            p=p->next;
        }
    }
    if (head->val==val)
        head=head->next;
    return head;
}
